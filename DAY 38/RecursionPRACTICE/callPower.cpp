#include<iostream>
using namespace std;
int calPow(int a,int b){
    //BASE CASE
    int ans;
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //RECURSIVE CALL
    ans=calPow(a,b/2);
    if(b%2==0){
      
       return ans*ans;
    }
    else{
        return a*ans;
    }
}
int main(){
    cout<<endl<<endl;
    int a,b;
    cout<<"ENTER THE VALUE OF A : "<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF B : "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"RESULT : "<<calPow(a,b)<<endl;
    cout<<endl<<endl;
    return 0;
}