#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
  stack<char> st;
  for(int i=0;i<s.size();i++){
   
   char ch=s[i];
   //FOR OPENING BRACKET
   if((ch=='(')||
      (ch=='[')||
      (ch=='{')){
        st.push(ch);
      }
    else{
        if(!st.empty()){

            if((st.top()=='(' && ch==')')||
                (st.top()=='['&& ch==']')||
                (st.top()=='{'&& ch=='}'))
                {
                    st.pop();
                }
            else{

//ELEMENT AT THE TOP OF STACK IS NOT MATCHING WITH EXITING BRACE
                return false;
            }
        }
        else{
                //STACK IS EMPTY BUT THERE IS STILL EXIST A BRACE(IMPOSSIBLE TO MAKE COMPARITION)

            return false;
        }
    }

  }  
  //AFTER THESE OPERATION WE NEED TO CHECKL IF STACK IS EMPTY OR NOT 
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
     cout<<endl<<endl;
     cout<<"ENTER THE STRING :- "<<endl;
     cin>>s;
     cout<<endl;
     if(isValid(s)){
        cout<<"STRING IS CONTAINING VALID PARENTHESIS "<<endl;
     }
     else{
        cout<<"STRING IS NOT CONTAINING VALID PARENTHESIS "<<endl;
     }
     cout<<endl<<endl;
    return 0;
}