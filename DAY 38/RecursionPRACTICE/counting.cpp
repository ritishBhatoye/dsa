#include<iostream>
using namespace std;

void counting(int n){
    //BASE CASE
    if(n==0){
        return ;
    }
    //recursive call
    counting(n-1);

    cout<<n<<endl;
}
int main(){
    int n;
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER FOR COUNTING "<<endl;
    cin>>n;
    counting(n);
    cout<<endl<<endl;
    return 0;
}