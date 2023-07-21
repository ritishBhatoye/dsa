#include<iostream>
using namespace std;
void ReachHome(int src,int Des){
    cout<<src<<endl;
    if(src==Des){
        cout<<"REACHED HOME "<<endl;
        return ;
    }
  
src++;
ReachHome(src,Des);
    
}
int main(){
    int src=1;
    int Des=10;
    ReachHome(src,Des);
    return 0;
}