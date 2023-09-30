#include<iostream>
using namespace std;
int factorial(int n){
    if(n>=1)
    {
        return n*factorial(n-1);
    }
}
int main(){
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER TO CALCULATE FACTORIAL "<<endl;
    int n;
    cout<<endl<<endl;
    cin>>n;

    cout<<"FACTORIAL OF "<<n<<" : "<<factorial(n)<<endl;
    cout<<endl<<endl;
   
    return 0;
}