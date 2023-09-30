#include<iostream>
using namespace std;
void home(int src,int dest){
    cout<<"SOURCE "<<src<<" DESTINATION "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"GHAR PAHUNCH GAYA"<<endl;
        return;
    }
    //recursve call
    home(src+1,dest);
}
int main(){
    int src=1;
    int dest=10;
    home(src,dest);
    return 0;
}