//VALID PARENTHESIS
#include<iostream>
#include<stack>
using namespace std;

bool valid(string expression){
    stack<char> s;
for(int i=0;i<expression.length();i++){
char ch=expression[i];
//if OPENING BRACKET PUSH THE CHAR IN THE STACK
//IF CLOSING BRACKET CHECK THE TOP OF THE STACK
if(ch=='(' || ch=='{' || ch=='['){
s.push(ch);
}
else{
    if(!s.empty()){
        char top=s.top();
        if(matches(top,ch)){
            s.pop();
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
if(s.empty()){
    return true;
}
else{
    return false;
}
}

int main(){
    stack<int> s;
    
    return 0;
}