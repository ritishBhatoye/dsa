#include<iostream>
using namespace std;

int sum(int s,int d){
    if(s>d){
         return 0;
    }
    int ans;
    ans=s+sum(s+1,d);
    return ans;
}
int main(){
    int s=0,d=10;
    cout<<sum(s,d)<<endl;
    return 0;
}
