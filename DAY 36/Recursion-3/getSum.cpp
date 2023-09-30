#include<iostream>
using namespace std;
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
int getSum(int *arr,int size){
    int ans=0;
    //BASE CASE
     if(size==0){
        return 0;
     }
     if(size==1){
        return arr[0];
     }

     //RECURSIVE CALL
     ans=arr[0]+getSum(arr+1,size-1);
     return ans;
     
}
int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr;
    arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<"ENTERRED ELEMENT IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<endl;
    cout<<"SUM : "<<getSum(arr,size)<<endl;
    cout<<endl<<endl;
    
    
    return 0;
}