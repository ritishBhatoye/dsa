#include<iostream>
#include<stack>
using namespace std;

bool isRedundant(string &s)
{
stack<char> st;
for(int i=0;i<s.size();i++){
    char ch=s[i];
    //for OPENING BRACKET OR OPERATOR
    if(ch=='('||ch=='+' || ch=='*' || ch=='/' || ch=='-'){
        st.push(ch);
    }
    else{
        //FOR CLOSING BRACKET
        bool isRed=true;
       if(ch==')')
       {
         while(st.top()!='('){
            char top=st.top();
            if(top=='+' || top=='/' || top=='-' || top=='*'){
              isRed=false;
            }
            //DELETING OPERATOR
              st.pop();
        }
        if(isRed==true){
            return true;
        }
        //DELETING OPENING BRACKET 
        st.pop();
    }
    }
}
return false;
}

int main(){
    cout<<endl<<endl;
    string s;
    cout<<"ENTER THE STRING FOR WHICH YOU WANT TO CHECK IF THERE EXIST REDUDANT BRACKETS :- "<<endl;
    cout<<endl;
    cin>>s;
    cout<<endl<<endl;
    if(isRedundant(s)){
        cout<<"   REDUNDANT "<<endl;
    }
    else{
        cout<<"   NOT REDUNDANT "<<endl;

    }
    return 0;
}