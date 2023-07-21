#include<iostream>
using namespace std;
int clim(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans=clim(n-1)+clim(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"ENTER THE STAIR NUMBER "<<endl;
    cin>>n;
    cout<<clim(n)<<endl;
    return 0;
}