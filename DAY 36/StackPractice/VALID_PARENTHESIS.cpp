//VALID PARENTHESIS
//APPROACH :-  
//STEP 1 :- STORE EACH CHARACTER OF STRING INTO TO CHAR VARIBALE
//OPENING BRACKET
//STEP 2 :- CHECK IF IT IS OPENEING BRACKET THEN PUSH ONTO STACK 
//FOR CLOSING BRACKET
//STEP 3 :-  ELSE 
//              {CHECK IF {CLOSING BRACKET MATCHES WITH PARTICULAR OPENEING BRAKET
//               THEN POP TOP ELEMENT}

//               ELSE {STACK IS EMPTY AND THERE IS STILL CLOSING BRACKET LEFT THEN
//                       RETURN FALSE;}
//STEP 4 :- AFTER COMING OUT OF THE LOOP
//        CHECK IF STACK IS EMPTY THEN {RETURN TRUE;}
//            ESLS RETURN FALSE;
#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string &s){
    stack<char> ch;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if((c=='(' || c=='[' || c=='{')){
            ch.push(c);
        }
        else{
            if(!ch.empty()){
                char top=ch.top();
                if((c==')' && top=='(')||
                (c==']' && top=='[')||
                (c=='}' && top=='{')){
                   ch.pop();
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
    if(ch.empty()){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
string str;
cout<<endl<<endl;
cout<<"ENTER THE STRING "<<endl;
cin>>str;
if(validParenthesis(str)){
    cout<<"VALID PARENTHESIS "<<endl;
}
else{
    cout<<"INVALID PARENTHESIS "<<endl;

}
cout<<endl<<endl;

return 0;
}