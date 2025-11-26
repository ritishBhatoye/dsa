#include<iostream>
using namespace std;

int lengthOfString(char name[])
{
    int cnt=0;
    for(int i=0;name[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    char name[20];
    cout<<"Enter the name  :- ";
    cin>>name;
    cout<<endl<<endl;
    cout<<"Your name is :- "<<name;
    cout<<endl<<endl;
    int ans=lengthOfString(name);
    cout<<"Enterted Length "<<ans<<endl;
    cout<<endl<<endl;


    return 0;
}
