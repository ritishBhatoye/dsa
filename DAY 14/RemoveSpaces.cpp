#include<iostream>
using namespace std;
string RemoveSpace(string s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
        }
        else{
  temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string s="My name is GARO";
    // cout<<"ENTER THE STRING "<<endl;
    // cin>>s;
    // cout<<"ENTERRED STRINGN IS :- "<<endl;
    // cout<<s<<endl;
    cout<<"REMOVING SPACING AND REPLACING IT WITH @40 "<<RemoveSpace(s)<<endl;
    // cout<<RemoveSpace(s)<<endl;
    return 0;
}
//END