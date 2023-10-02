#include<iostream>
using namespace std;

void walking(int s,int e){
    cout<<"CURRENTLY : "<<s<<" END : "<<e<<endl;
    if(s==e){
        cout<<"REACHED HOME "<<endl;
        return;
    }
    //recursive call
    walking(s+1,e);
}

int main(){
    int s;
    int e;
    cout<<endl<<endl;
    cout<<"ENTER THE STARTING POINT : "<<endl;
    cin>>s;
    cin>>e;
    cout<<endl;
    walking(s,e);
    cout<<endl;
    cout<<endl<<endl;
    return 0;
}