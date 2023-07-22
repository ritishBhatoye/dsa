//CALCULATE THE POWER
#include<iostream>
using namespace std;
int Cal(int base,int power){
  if(power!=0)
    {    
        return base*Cal(base,power);
    }
}
int main(){
    int base;
    cout<<"ENTER THE VALUE OF BASE "<<endl;
    cin>>base;
    int p;
    cout<<"ENTER THE EXPONENT POWER "<<endl;
    cin>>p;
    cout<<"EVALUATTE THE POWER "<<Cal(base,p)<<endl;
    return 0;
}