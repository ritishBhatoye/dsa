#include<iostream>
#include<stack>
using namespace std;

bool isRed(string &s){
    bool red;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='+' || ch=='/' || ch=='-' || ch=='*' || ch=='('){
            st.push(ch);
        }
    else{
        if(ch==')'){
            red=true;
            while(st.top()!='('){
                char top=st.top();
                if(top=='+' || top=='-' || top=='/' || top=='*'){
                    red=false;
                }
                    st.pop();
            }
            if(red==true){
                return true;
            }
            st.pop();
        }
    }
    }
    return false;
}

int main(){
    cout<<endl<<endl;
    string s;
    cin>>s;
    if(isRed(s)){
        cout<<"REDUNDENT EXPRESSION "<<endl;
    }
    else{
        cout<<"NOT REDUNDENT EXPRESSION "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}