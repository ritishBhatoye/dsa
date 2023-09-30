#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<char> s;
 cout<<endl<<endl;
string str;
 cout<<"ENTER THE STRING YOU WANT TO INSERT "<<endl;
 cin>>str;
 for(int i=0;i<str.length();i++){
    char ch=str[i];
    s.push(ch);
 }
 string ans="";
 while(!s.empty()){
  char c=s.top();
  s.pop();
  ans.push_back(c);  
 }
 cout<<"ENTERRED STRING "<<str<<endl;
 cout<<"RESVERSED STRING "<<ans<<endl;
 cout<<endl<<endl;

    return 0;
}