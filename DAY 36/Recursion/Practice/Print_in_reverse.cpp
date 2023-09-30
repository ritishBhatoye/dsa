#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    //recursive call
    return print(n-1);
}

int main(){
    int num;
    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>num;
    cout<<endl;
    print(num);
    cout<<endl<<endl;

    return 0;
}