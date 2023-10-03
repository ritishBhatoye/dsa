#include<iostream>
using namespace std;

bool reverseString(string& str,int s,int e){
    //BASE CASE
    if(s>e){
        return true;
    }
    //RECURSIVE CALL
    if(str[s]!=str[e]){
           
       return false;
    }
    else{
        return reverseString(str,s+1,e-1);
    }
}


int main(){
 string str;
 cout<<endl<<endl;

 cout<<"ENTER THE STRING YOU FO WHICH YOU WANT TO CHECK IF IT IS PALIDROME "<<endl;
 cin>>str;

if(reverseString(str,0,str.size()-1)){
    cout<<"STRING IS PALIDROME "<<endl;
}
else{
    cout<<"STRING IS NOT PALIDROME "<<endl;
}
 cout<<endl<<endl;
 
    return 0;
}