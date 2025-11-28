#include<iostream>
using namespace std;

int lengthStr(char s[])
{
    int cnt=0;
    for(int i=0;s[i]!='\0';i++)
    {
        cnt++;
    }

    return cnt;
}

void reverseString(char s[])
{
    int st=0;
    int e=lengthStr(s)-1;

    while(st<=e)
    {
        swap(s[st++],s[e--]);
    }

}

bool checkIfPalidrome(char s[])
{
    int st=0;
    int e=lengthStr(s)-1;
    while(st<=e)
    {
        if(s[st++]!=s[e--])
        {
            return false;
        }
    }
    return true;
}

char maxOccuringChar(char str[])
{
    int arr[26]={0};
    int e=lengthStr(str);
    
    for(int i=0;i<e;i++)
    {
        char ch=str[i];
        int n=0;
        if(ch >= 'a' && ch<='z')
        {
             n=ch-'a';
            
        }
        else if(ch>='A' && ch <='Z')
        {
            n=ch-'A';
        }
        arr[n]++;
    }

    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>maxi)
        {
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
} 


int main()
{
    
    char s[6];
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Enter the string :- ";
    cin>>s;
    cout<<endl<<endl;
    cout<<"Entered string is :- "<<s<<endl;
    cout<<endl<<endl;
    cout<<"Length :- "<<lengthStr(s)<<endl;
    cout<<"After reversing string :- "<<endl;
    reverseString(s);
    cout<<s<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    if(checkIfPalidrome(s))
    {
        cout<<"Yes "<<s<<" string is Palidrome !!"<<endl;
    }
    else
    {
        cout<<"NO "<<s<<" string is NOT Palidrome  !!!!"<<endl;
    }
    cout<<endl<<endl;
    cout<<"Maximum Occuring character :- "<<maxOccuringChar(s);
    cout<<endl<<endl;
    cout<<endl<<endl;



}