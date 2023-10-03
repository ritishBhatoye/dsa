#include<iostream>
using namespace std;

void reverseString(string& str,int s,int e){
//BASE CASE
    if(s>e){
        return;
    }

    swap(str[s],str[e]);
//RECURSIVE CALL
reverseString(str,s+1,e-1);
}

int main(){
    cout<<endl<<endl;
    string str;
    cout<<"ENTER THE STRING YOU WANT TO REVERSE "<<endl;
    cin>>str;
    reverseString(str,0,str.length()-1);
    cout<<"RESERVED STRING IS "<<str<<endl;
    cout<<endl<<endl;

    return 0;
}