#include<iostream>
using namespace std;

void  counting(int n){
   //Base Condition
   if(n==0){
    return ;
   }
   cout<<n<<endl;
   //Recursive Call
   counting(n-1);
}

int main(){
    cout<<endl<<endl;
    int n;
    cout<<"ENTER THE NUMBER : "<<endl;
    cin>>n;
   cout<<"RESULT : "<<endl;
   counting(n);
   
    cout<<endl<<endl;
    return 0;
}