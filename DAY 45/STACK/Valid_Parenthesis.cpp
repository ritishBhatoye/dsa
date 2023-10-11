#include<iostream>
#include<stack>

using namespace std;

bool isValid(string &s)
{
stack<char> st;
for(int i=0;i<s.size();i++){
    char ch=s[i];
    //for OPENINGN BRAKET 
    if(ch=='(' || ch=='{' || ch=='['){
        st.push(ch);
    }
    //for CLOSING BRACKET
    else{
        while(!st.empty()){
            if((ch==')' && st.top()=='(')||
               (ch==']' && st.top()=='[')||
               (ch=='}' && st.top()=='{')){
                return true;
            }
             else{
                return false;
             }
        }
        if(st.empty()){
            return true;
        }
    }
}
}

int main(){
    string s;
    cout<<endl<<endl;
    cout<<"ENTER THE PARENTHESIS TO CHECK WHETHER IT IS VALID :- "<<endl;
    cout<<endl;
    cin>>s;
    cout<<endl;
    if(isValid(s)){
        cout<<"VALID PARENTHESIS "<<endl;

    }
    else{
        cout<<"INVALID PARENTHESIS "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}