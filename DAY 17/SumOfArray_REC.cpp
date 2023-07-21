//finding the sum of an array using the recursion
#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int SumArray(int arr[],int size){
    int sum =0;
    if(size==0){
        return sum;
    }
    if(size==1){
        sum=arr[0];
   return sum; 
    }
    else{
        sum=arr[0]+SumArray(arr+1,size-1);
        return sum;
    }
}
int main(){
    int arr[10];
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    print(arr,size);
    cout<<"SUM OF ARRAY IS "<<SumArray(arr,size)<<endl;
    return 0;
}