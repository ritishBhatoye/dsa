#include<iostream>
#include<string>
using namespace std;
bool Check(int n){
     int N=n*1000000+(2*n*1000)+3*n;
    string s=to_string(N);
     for(int i=0;i<9;i++){ 
    for(int j=i+1;j<9;j++){
        if(s[j]<s[i]){
            swap(s[i],s[j]);
        }
    }
   }
   int j=1;
   for(int i=0;i<9;i++){
    if(s[i]==0){
        return false;
    }
   }
   return true;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>n;
    cout<<Check(n)<<endl;
    return 0;
}