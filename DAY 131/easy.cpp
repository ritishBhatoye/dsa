#include<iostream>
#include <algorithm>

using namespace std;
//Factorial
int fac(int k)
{
    if(k==0)
    {
        return 1;
    }

    return k * fac(k-1);
}

void print1toN(int n)
{

    if(n==1)
    {
        cout<<n<<" ";
        return ;
    }
    

    print1toN(n-1);
    
    cout<<n<<" ";
    
    return ;
}

void printNto1(int n)
{

    if(n==1)
    {
        cout<<n<<" ";
        return ;
    }
    cout<<n--<<" ";
    
    printNto1(n);

}

//power function
// \(a^b\) 
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }

    return a * power(a,b-1);

}
//Reverse an array / string using recursion
void inputArr(int *arr,int size)
{
    cout<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" = ";
        cin>>arr[i];
    }
    cout<<endl<<endl;

}

void print(int * arr,int size)
{
    cout<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverseArr(int *arr,int s,int e)
{

    if(s==e)
    {
        cout<<"Reached end... "<<endl;
        return ;
    }
   
    swap(arr[s++],arr[e--]);
    
    reverseArr(arr,s,e);  

}

bool chec

int main()
{

    cout<<endl<<endl;
    // int k;
    // cout<<"Enter the number to find Fac :- ";
    // cin>>k;
    cout<<endl<<endl;
    // cout<<"Fac :- "<<fac(k)<<endl;
    printNto1(20);
    cout<<endl<<endl;
    print1toN(20);
    cout<<endl<<endl;
    cout<<endl<<endl;

    int ans=power(10,5);
    cout<<ans<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    cout<<"Enter the elements in the array :- ";
    inputArr(arr,size);
    cout<<endl<<endl;
    cout<<"Before the reversing the array :- "<<endl;

    print(arr,size);
    cout<<endl<<endl;

    reverseArr(arr,0,size-1);

    cout<<endl<<endl;
    cout<<"After the reversing the array :- "<<endl;
    print(arr,size);
    cout<<endl<<endl;

    return 0;
}