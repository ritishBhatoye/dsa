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

void counting(int n)
{
    if(n==1)
        return ;

    counting(n-1);    
    cout<<
}

int main()
{
    int a,b;
    cout<<"Enter the Number :- ";
    cin>>a;

    cout<<"Enter the power :- ";
    cin>>b;
    cout<<endl<<endl;

    int ans = power(a,b);
    cout<<endl<<endl;
    cout<<"Ans :- "<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}