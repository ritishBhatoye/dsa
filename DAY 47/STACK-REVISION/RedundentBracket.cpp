#include<iostream>
#include<stack>
using namespace std;

bool isRedundant(string &s){
    stack<char> st;
    //if OPENING BRACKET OR ANY OPERATOR THEN PUSH ON STACK
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='(' ||
           ch=='+' ||
           ch=='-' ||
           ch=='*' ||
           ch=='/'){
            st.push(ch);
           }
        else{
            //for CLOSING BRACKET OR LOWER CASE LETTER
             bool red=true;
          while(!st.empty())
             {  
               
            if(st.top()=='*' || st.top()=='/' || st.top()=='-' || st.top()=='+')
            {
                st.pop();
            }
               
                red=false;
                
            }
            if(red==true){
            return true;
        }
        }  
        
    }
    return false;
}

int main()
{
    string s;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING :- "<<endl;
    cout<<endl<<endl;
    cin>>s;
    cout<<endl;
    if(isRedundant(s)){
        cout<<"REDUNDANT BRACKETS "<<endl;
    }
    else{
        cout<<"NOT REDUNDANT BRACKETS "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}