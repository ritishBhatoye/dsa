#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
cin>>arr[i];
    }
}
int sLargest(int *arr,int size){
    int ans=0;
    int max=INT_MIN;
    int i=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            ans=max;
            max=arr[i];
           
        }
        else if(arr[i]!=max && arr[i]>ans){
            ans=arr[i];
        }
        
    }
    return  ans;
}
int sSmallest(int *arr,int size){
    int ans=0;
    int min=INT_MAX;
    int i=0;
    while(i<size){
        if(arr[i]<min){
            ans=min;
            min=arr[i];
        }
        else if(arr[i]!=min && arr[i]<ans){
            ans=arr[i];
        }
        i++;
    }
    return ans;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    cout<<"SECOND LARGEST ELEMENT IN AN ARRAY "<<sLargest(arr,size)<<endl;
    cout<<"SECOND SMALLEST ELEMENT IN AN ARRAY "<<sSmallest(arr,size)<<endl;
    return 0;
}