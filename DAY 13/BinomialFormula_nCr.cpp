//Binomil formula nCr
#include<iostream>
using namespace std;
int B(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
return res;
}
int main(){
    int n;
    int r;
    cout<<"nCr :-  "<<endl;
    cout<<"ENTER THE VALUE OF n :- "<<endl;
    cin>>n;
    cout<<"ENTER THE VALUE OF r :- "<<endl;
    cin>>r;
    cout<<"RESULT "<<B(n,r)<<endl;
    return 0;
}