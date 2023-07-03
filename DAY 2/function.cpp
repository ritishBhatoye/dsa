#include<iostream>
using namespace std;
int pow(int a,int b){
    int ans;
    for(int i=1;i<=b;i++){ 
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=pow(a,b);
    cout<<"ANSWER "<<ans<<endl;
    return 0;
}
