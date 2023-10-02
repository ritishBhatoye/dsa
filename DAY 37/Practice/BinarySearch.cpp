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
}

bool BinarySearch(int *arr,int s,int e,int x){
    bool ans;
    //BASE CASE 
    int mid=(s+e)/2;
    if(s>e){
      return false;
    }
    if(arr[mid]==x){
        return true;
    }
 else{   if(arr[mid]>x){
       ans=BinarySearch(arr,s,mid-1,x);
       return ans;
    }
    if(arr[mid]<x){
        ans=BinarySearch(arr,mid+1,e,x);
        return ans;
    }

    }
    mid=(s+e)/2;
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
    if(BinarySearch(arr,0,size-1,x)){
        cout<<x<<" IS PRESENT IN AN ARRAY "<<endl;
    }
    else{
        cout<<x<<" IS NOT PRESENT IN AN ARRAY "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}