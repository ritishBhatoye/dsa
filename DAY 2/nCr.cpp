#include<iostream>
using namespace std;
int fac(int a){
    int fac=1;
    //int ans;
    for(int i=1;i<=a;i++){
   fac=fac*i;
    }
    return fac;
}
int ncr(int n,int r){
    int num=fac(n);
    int den=fac(r)*fac(n-r);
    int ans=num/den;
    return ans;
}
int main()
   {int a,b;
   cin>>a;
   cin>>b;
    int ans=ncr(a,b);
    cout<<ans<<" IS ANSWER "<<endl;
    return 0;
}