//REMOVE PART FROM STRING 
#include<iostream>
using namespace std;
string Remove(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s="daabcbaabcbc";
    string part="abc";
    cout<<"REMOVE PART "<<part<<" FROM "<<s<<endl;
    cout<<Remove(s,part)<<endl;
    return 0;
}