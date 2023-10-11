#include<iostream>
#include<stack>
using namespace std;

bool isRedundent(string s){
    
   stack<char> st;
   
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        //for OPENING BRACKET OR OPERATOR
        if((ch=='(')||
           (ch=='+')||
           (ch=='-')||
           (ch=='/')||
           (ch=='*')){
            st.push(ch);
           }
        else{
            //for CLOSING BRACKET 
           if(!st.empty())
            {
                if((ch==')' && st.top()=='(')){

                return false;
            }
            if((ch==')' && st.top()=='+')||
               (ch==')' && st.top()=='/')||
               (ch==')' && st.top()=='*')||
               (ch==')' && st.top()=='-')
            ){
                 st.pop();
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
    string s;
    return 0;
}