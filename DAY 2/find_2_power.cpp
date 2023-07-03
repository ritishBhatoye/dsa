#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=31;i++){
     int ans=pow(2,i);
     if(ans==n){
        cout<<"TRUE"<<endl;
        break;
     }
   
    }
    return 0;
}