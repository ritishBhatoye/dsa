#include<iostream>
using namespace std;
void count(int n){
    //base case
    if(n==0){
        return ;
    }
    //recursive call
    count(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    n=5;
    count(n);
    return 0;
}