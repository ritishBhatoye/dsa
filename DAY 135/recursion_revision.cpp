#include<iostream>

using namespace std;

// a ^ b
int power(int a,int b)
{
    if(b==0)
        return 1;

    return a * power(a,b-1);

}

// 2.Factorial
int fac(int n)
{
    if(n==0)
        return 1;

    return n*fac(n-1);
}
//3.counting from 1 to n;

void countingInc(int n)
{
    if(n==0)
        return ;

    countingInc(n-1);    
    cout<<n<<" ";
}

void countingDec(int n)
{
    if(n==0)
        return ;
    
    cout<<n<<" ";
    countingDec(n-1);
}
//4. fibonacci series
int fibonacciSeries(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    
}
//5.Say Digit
void sayDigit(int n,string* digit)
{
    if(n==0)
        return ;

    int d = n % 10;


    n=n/10;
    sayDigit(n,digit);

    cout<<digit[d]<<" ";
}

// 6.reversing an array
void inputArr(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element at :- "<<i<<" = ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reverseArr(int s,int e,int* arr)
{
    if(s>e)
        return ;

    swap(arr[s],arr[e]);

    reverseArr(s+1,e-1,arr);
}
// 7.Linear Search
bool linearSearch(int *arr,int n,int k)
{
    if(n==0)
        return false;

    if(arr[0]==k)
        return true;
    
    return linearSearch(arr+1,n-1,k);
}
//8.Boolean Search
bool binarySearch(int s,int e,int* arr,int k)
{
    if(s>e)
        return false;

    
    int mid = s + (e-s)/2;

    if(arr[mid]==k)
        return true;

    else if(arr[mid] <k)
    {
        return binarySearch(mid+1,e,arr,k);
    }
    else
    {
        return binarySearch(0,mid-1,arr,k);
    }

}

//9. reverse string 
void reverseString(int s,int e,string & str)
{
    if(s>e)
        return ;

    swap(str[s],str[e]);
    reverseString(s+1,e-1,str);


}

//10.check if palidrome 
bool checkPalidrome(int s,int e,string& str)
{
    if(s>e) 
        return true;

    if(str[s]!=str[e])
        return false;
    return checkPalidrome(s+1,e-1,str);
}
int main()
{
    // cout<<"Enter the Number :- ";
    // cin>>a;
    // int n;
    // cin>>n;
    // int ans = fibonacciSeries(n);
    // cout<<"Fibonacci Series :- "<<ans<<endl;
    // cout<<"Enter the power :- ";
    // cin>>b;
    cout<<endl<<endl;
    int n;
    cout<<"Enter the size of an array :- ";
    cin>>n;
    int *arr=new int[n];

    inputArr(arr,n);
    cout<<"Printing :- ";
    printArr(arr,n);
    // reverseArr(0,n-1,arr);
    cout<<endl<<endl;

    int k;
    cout<<"Enter the element k to check whether it is present in the array or not "<<endl;
    cin>>k;
    if(binarySearch(0,n-1,arr,k))
    {
        cout<<"Element "<<k<<" is present in the arr"<<endl;
    }
    else{
        cout<<"Element "<<k<<" is NOT present in the arr"<<endl;

    }

    // int ans = power(a,b);
    cout<<endl<<endl;
    string str;
    cout<<"Enter the string :- ";
    cin>>str;
    reverseString(0,str.length()-1,str);
    cout<<"String Reversed :- "<<str<<endl;
    // int n;
    // cout<<"Enter the value for which you want to cal the factorial :- ";
    // cin>>n;
    // int facAns = fac(n);
    cout<<endl<<endl;
    // cout<<"Factorial Ans :- "<<facAns;
  
    // cout<<endl<<endl;

    // cout<<endl<<endl;
    // cout<<endl<<endl;


    // cout<<endl<<endl;



    // cout<<endl<<endl;

    // cout<<endl<<endl;

    return 0;
}