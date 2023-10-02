#include<iostream>
using namespace std;
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
cout<<endl;
}
void printBS(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int *arr,int s,int e,int k){
    //base case
    printBS(arr,s,e);
    if(s>e){
return false;
    }
    int mid=s+(e-s)/2;
    cout<<"MID : "<<arr[mid]<<endl;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
     return binarySearch(arr,mid+1,e,k);
    }
    if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
    }
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<endl;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH "<<endl;
    int x;
    cin>>x;
    cout<<endl<<endl;
    if(binarySearch(arr,0,size-1,x)){
        cout<<x<<" IS PRESENT IN AN ARRAY "<<endl;
    }
    else{
        cout<<x<<" IS NOT PRESENT IN AN ARRAY "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}