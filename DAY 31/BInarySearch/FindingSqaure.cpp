#include<iostream>
using namespace std;

int sqaure(int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if((mid*mid)==n){
          return mid;
        }
        if((mid*mid)>n){
            e=mid-1;
        }
        if((mid*mid)<n){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
return mid;
}
int main(){
    int n;
    cout<<"ENTER THE ELEMENT TO FIND SQUARE ROOT : "<<endl;
    cin>>n;
    cout<<"SQAURE ROOT : "<<sqaure(n)<<endl;
    return 0;
}