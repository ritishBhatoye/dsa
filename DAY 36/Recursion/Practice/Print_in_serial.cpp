#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
    return ;
    }
    //recursive call
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl<<endl;
    print(n);
    cout<<endl;
    return 0;
}