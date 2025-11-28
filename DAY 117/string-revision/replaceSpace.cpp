#include<iostream>
#include<string>
using namespace std;

string replaceSpaces(string &s)
{
    string ans=" ";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('8');
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}


int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    string s;
    getline(cin,s);
    cout<<endl<<endl;
    cout<<"Reaplcing Spaces with @48 "<<endl;
    string ans=replaceSpaces(s);
    cout<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}