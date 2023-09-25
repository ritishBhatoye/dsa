//FIND SQUARE ROOT 
#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int SquareRoot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if((mid*mid)==n){
            return mid;
        }
        if((mid*mid)>n){
            e=mid-1;
        }
        if((mid*mid)<n){
            ans=mid;
            s=mid+1;
        }
mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
int num;
cout<<"ENTER THE NUMBER FOR WHICH YOU WANT TO FINT SQUARE ROOT "<<endl;
cin>>num;
cout<<"SQUARE ROOT : "<<SquareRoot(num);
    return 0;
}