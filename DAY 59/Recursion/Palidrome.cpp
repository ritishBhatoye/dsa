#include<iostream>
using namespace std;

bool Palidrome(string &st,int s,int e){
    if(s>=e){
        return false;
    }
    if(st[s]==st[e]){
        return true;
    }
    else{
        return Palidrome(st,s+1,e-1);
    }
}

int main(){
    string s;
    cout<<endl<<endl;
    cin>>s;
    int size=s.size();
    if(Palidrome(s,0,size-1)){
        cout<<"STRING IS PALIDROME "<<endl;
    }
    else{
        cout<<"STRING IS NOT PALIDROME "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}