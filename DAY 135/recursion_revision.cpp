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
bool linearSearch(int *arr,int k)
{
    if(arr[0]==k)
        return true;

    return linearSearch(arr+1,k);
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
    reverseArr(0,n-1,arr);

    int k;
    cout<<"Enter the element k "<<k<<" to check whether it is present in the array or not "<<endl;
    cin>>k;
    

    // int ans = power(a,b);
    cout<<endl<<endl;
    // int n;
    // cout<<"Enter the value for which you want to cal the factorial :- ";
    // cin>>n;
    // int facAns = fac(n);
    cout<<endl<<endl;
    // cout<<"Factorial Ans :- "<<facAns;
  
    cout<<endl<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;


    cout<<endl<<endl;



    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}