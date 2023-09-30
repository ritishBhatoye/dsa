#include<iostream>
using namespace std;
int fib(int n){
    // base case
    if(n==0 || n==1){
        return n;
    }
    //Recursive call
   int ans= fib(n-1)+fib(n-2);
   return ans;
    
}
int main(){
    int n;
   cout<<endl<<endl;

    cout<<"ENTER THE TERM "<<endl;
    cin>>n;
    cout<<"NUMBER/ELEMENT PRESENT AT "<<n<<" = "<<fib(n)<<endl;
   cout<<endl<<endl;
    

}