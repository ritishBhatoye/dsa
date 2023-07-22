#include<iostream>
using namespace std;
bool checkPal(string s,int i,int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
       return checkPal(s,i+1,j-1);
    }
}
int main(){
    string s;
    cout<<"ENTER THE STRING "<<endl;
    cin>>s;
    if(checkPal(s,0,s.length()-1)){
        cout<<"ENTERRED STRING "<<s<<" IS PALIDROME "<<endl;
    }
    else{
         cout<<"ENTERRED STRING "<<s<<" IS NOT PALIDROME "<<endl;

    }
    return 0;
}