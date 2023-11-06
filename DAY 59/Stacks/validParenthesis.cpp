#include<iostream>
#include<stack>
using namespace std;

bool isValid(string &s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
          char ch=s[i];
          //opening braces
          if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
          }
        else
          {
            //if CLOSING BRACES
            if(!st.empty())
            {
               char top=st.top();
            if((ch==')' || top=='(') ||
               (ch=='}' || top=='{')||
               (ch==']' || top=='['))
               {
                st.pop();
               }
            else{
                return false;
            }
            }
            else{
                return false;
            }
          }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    cout<<endl<<endl;
    string s;
    cin>>s;
    if(isValid(s)){
        cout<<"STRING EXPRESSION IS VALID "<<endl;
    }
    else{
        cout<<"STRING EXPRESSION IS NOT VALID "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}