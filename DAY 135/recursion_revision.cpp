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

int main()
{
    int a,b;
    // cout<<"Enter the Number :- ";
    // cin>>a;

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
    int n;
    cin>>n;
    cout<<"counting from 0 to "<<n<<endl;
    countingInc(n);
    cout<<endl<<endl;
    cout<<"counting from "<<n<<"to 0 "<<endl;

    countingDec(n);

    cout<<endl<<endl;



    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}