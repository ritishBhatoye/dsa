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
        if((ch ==')' && top=='(')||
            (ch =='}' && top=='{')||
            (ch ==']' && top=='[')
        ){
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
    string str;
    cout<<endl<<endl;
    cout<<"ENTER THE STRING OF PARENTHESIS TO CHECK WHETHER IT IS VALID OR NOT "<<endl;
    cin>>str;
    if(valid(str)){
    cout<<endl<<endl;
        
        cout<<"VALID PARENTHESIS "<<endl;
    cout<<endl;

    }
    else{
    cout<<endl<<endl;

    cout<<"NOT VALID PARENTHESIS "<<endl;
    cout<<endl;

    }
    cout<<endl<<endl;
    return 0;
}