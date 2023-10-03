#include<iostream>
using namespace std;

int GetSum(int *arr,int size){
//base case
if(size==0 || size==1){
    return arr[0];
}
//recursive call
return arr[0]+GetSum(arr+1,size-1);
}
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int *arr;
int size;
cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
cin>>size;
arr=new int[size];
cout<<endl<<endl;
input(arr,size);
cout<<endl;
print(arr,size);
cout<<endl<<endl;
cout<<"SUM : "<<GetSum(arr,size)<<endl;
    return 0;
}