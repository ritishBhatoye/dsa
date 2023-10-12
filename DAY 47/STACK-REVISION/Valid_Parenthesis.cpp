//VALID IF {[()]}
//NOT VALID IF {[)}
#include<iostream>
#include<stack>
using namespace std;

bool isValid(string &s){
    stack<char> st;

    for(int i=0;i<s.size();i++){
     //storing char of STRING into VARIABLE
    char ch=s[i];
    //for OPENING BRACKET PUSH ON TO STACK
    if(ch=='{' || ch=='[' || ch=='('){
        st.push(ch);
    }
    //for CLOSING BRACKET COMPARE AND IF ON THE TOP OF STACK THERE EXITS 
    //CORRESPONDING OPENING BRACKET THEN POP;
   else
      {
        if(!s.empty())
        {
        if((ch==')' && st.top()=='(')||
         (ch=='}' && st.top()=='{')||
         (ch==']' && st.top()=='['))
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

{   string s;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING :- "<<endl;
    cout<<endl;
    cin>>s;
    cout<<endl<<endl;
    if(isValid(s)){
        cout<<"VALID PARENTHESIS "<<endl;
    }
    else{
        cout<<"NOT VALID PARENTHESIS "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}