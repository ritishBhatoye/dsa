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

    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}

int main()
{
    // cout<<"Enter the Number :- ";
    // cin>>a;
    int n;
    cin>>n;
    int ans = fibonacciSeries(n);
    cout<<"Fibonacci Series :- "<<ans<<endl;
    // cout<<"Enter the power :- ";
    // cin>>b;
    // cout<<endl<<endl;

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