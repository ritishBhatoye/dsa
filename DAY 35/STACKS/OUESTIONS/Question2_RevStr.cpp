//REVERSE A STRING USING STACK
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
   cout<<endl;
    cout<<"ENTER THE STRING YOU WANT TO REVERSE "<<endl;
   cout<<endl<<endl;
    cin>>s;
    stack<char> ch;
    cout<<"ENTERED STRING IS : "<<s<<endl;
    for(int i=0;i<s.length();i++){
     char c=s[i];
     ch.push(c);
    }
   cout<<endl;

    string ans="";
    while(!ch.empty()){
        char a=ch.top();
        ans.push_back(a);
        ch.pop();
    }
   cout<<"REVERSED STRING IS : "<<ans<<endl;
   cout<<endl<<endl;
    return 0;
}