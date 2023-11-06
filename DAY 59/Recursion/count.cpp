#include<iostream>
using namespace std;
void count(int n){
    if(n==0){
        return ;
    }
    count(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<endl<<endl;
    cin>>n;
    count(n);
    cout<<endl<<endl;
    return 0;
}