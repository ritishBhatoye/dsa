#include<iostream>
using namespace std;

int climb(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    return (climb(n-1)+climb(n-2));
}
int main(){
    cout<<endl<<endl;
    int n;
    cin>>n;
    cout<<endl;
    cout<<climb(n)<<endl;
    cout<<endl<<endl;
    
    return 0;
}