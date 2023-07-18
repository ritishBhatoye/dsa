#include<iostream>
using namespace std;
int getLength(char name[]){
    int ans=0;
    for(int i=0;name[i]!='\0';i++){
     ans++;
    }
    return ans;
}
int main(){
    char name[20];
    cout<<"ENTER YOUR NAME :- "<<endl;
    cin>>name;
    cout<<"ENTERRED NAME IS :- "<<endl;
    cout<<name<<endl;
    cout<<"LENGTH OF ENTERRED STRING IS :- "<<getLength(name)<<endl;
    return 0;
}