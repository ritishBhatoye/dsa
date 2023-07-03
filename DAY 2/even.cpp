#include<iostream>
using namespace std;
bool check(int a){
   if(a&1){
    return 0;
   }
return 1;
}
int main(){
    int a;
    cin>>a;
    if(check(a)){
        cout<<a<<" is EVEN"<<endl;
    }
    else{
        cout<<a<<" is ODD"<<endl;
    }
    return 0;
}