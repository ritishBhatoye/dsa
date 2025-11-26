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

void reverseString(char str[])
{
    int s=0;
    int e=lengthOfString(str)-1;

    while(s<=e)
    {
        swap(str[s++],str[e--]);
    }

}

bool checkPalidrome(char str[])
{
    int s=0;
    int e=lengthOfString(str)-1;

    while(s<=e)
    {
        if(str[s++]!=str[e--])
        {
            return false;
        }
    }

    return true;
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
    cout<<endl<<endl;

    cout<<"After reversing :- "<<endl;
    reverseString(name);
    cout<<name<<endl;
    if(checkPalidrome(name))
    {
        cout<<"Entered string is PALIDROME"<<endl;
    }
    else
    {
        cout<<"Entered string is NOT PALIDROME"<<endl;

    }
    cout<<endl<<endl;


    return 0;
}
