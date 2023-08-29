#include<iostream>
#include<stack>
using namespace std;
int main(){

    string s="RITISH";

    stack<char> a;

    for(int i=0;i<s.length();i++){
     char ch=s[i];
     a.push(ch);
    }

    string ans="";
    while(!a.empty()){
    char ch=a.top();
    ans.push_back(ch);
    a.pop();
    }
    cout<<ans<<endl;
    return 0;
}