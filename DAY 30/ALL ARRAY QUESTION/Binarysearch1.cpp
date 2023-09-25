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
int binarySearch(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        if(x>arr[mid]){
         s=mid+1;
        }
        else{
        e=mid-1;
        }
        mid=(s+e)/2;
    }
return -1;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    cout<<endl;
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    if(binarySearch(arr,size,x)==-1)
    {
        cout<<x<<" IS NOT PRESENT IN AN ARRAY "<<endl;
    }
    else{
        cout<<x<<" IS PRESENT IN AN ARRAY "<<binarySearch(arr,size,x)<<endl;
    }
    return 0;
}