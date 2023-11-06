#include<iostream>
#include<stack>
using namespace std;
int main()
{
    cout<<endl<<endl;
    string s;
    stack<char> st;
    cin>>s;
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        st.push(ch);
    }
    s.clear();
    while(!st.empty())
    {
        char c=st.top();
        s.push_back(c);
        st.pop();
    }
    cout<<"REVERSED STRING : "<<s<<endl;
    cout<<endl<<endl;

    return 0;
}