#include<iostream>
using namespace std;

void walking(int st,int dest){
    //base case
    cout<<"STARTING POINT : "<<st<<" DESTINATION POINT "<<dest<<endl;

    if(st==dest){
        cout<<"REACHED HOME "<<endl;
        return ;
    }
    //recursive call
    walking(st+1,dest);

}

int main(){
    int st,dest;
    cout<<endl<<endl;
    cout<<"ENTER THE STARTING POINT "<<endl;
    cin>>st;
    cout<<"ENTER THE DESTINATION POIND "<<endl;
    cin>>dest;
    
    walking(st,dest);
    cout<<endl<<endl;
    return 0;
}