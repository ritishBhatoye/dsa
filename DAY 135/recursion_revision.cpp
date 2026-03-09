#include<iostream>

using namespace std;

// a ^ b
int power(int a,int b)
{
    if(b==0)
        return 1;

    return a * power(a,b-1);

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