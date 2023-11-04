#include<iostream>
#include<stack>
using namespace std;


int main()
{
    string s;
    stack<char> st;
    cout<<endl<<endl;

    cout<<"ENTER STRING "<<endl;
    cin>>s;
    cout<<"ENTERED STRING "<<s<<endl;
    for(int i=0;i<s.length();i++){
     char c=s[i];
     st.push(c);
    }
    s.clear();
    while(!st.empty()){
        char ch=st.top();
        s.push_back(ch);
        st.pop();
    }
    cout<<endl<<endl;
    cout<<"REVERSED STRING "<<s<<endl;
    cout<<endl<<endl;

    return 0;
}