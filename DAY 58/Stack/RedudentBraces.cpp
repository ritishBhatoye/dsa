#include<iostream>
#include<stack>
using namespace std;

bool findRedundentBraces(string &s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='/' || ch=='*'){
            st.push(ch);
        }
        else{
            if(ch==')'){
              bool red=true;

                while(st.top()!='('){
                        char top=st.top();
                        if(top=='+' || top=='-' || top=='/' || top=='*'){
                            red=false;
                        }
                     st.pop();
                }
                if(red==true)
                    return true;
                st.pop();

            }
        }
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    cout<<endl<<endl;
if(findRedundentBraces(s)){
    cout<<"BRACES REDUNDENT!!! "<<endl;
}
else{
    cout<<"BRACES ARE NOT REDUNDENT!!! "<<endl;
}
    cout<<endl<<endl;

    return 0;
}