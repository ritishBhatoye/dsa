#include<iostream>
#include<stack>
using namespace std;

bool isValid(string &s){
    stack<char> st;
    int size=s.size();
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        //if opening bracket
        if(ch=='{' || ch=='[' || ch=='('){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top=st.top();
                if((ch==']' && top=='[') ||
                   (ch==')' && top=='(') ||
                   (ch=='}' && top=='{')){
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

int main(){
    string s;
    cout<<endl<<endl;

    cout<<"ENTER THE STRING "<<endl;
    cin>>s;
    if(isValid(s)){
        cout<<"YES STRING IS VALID "<<endl;
    }
    else{
        cout<<"NO!! STRING IS NOT VALID "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}