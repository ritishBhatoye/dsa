#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int firstOccurenceOfelement(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==x){
        ans=mid;
        e=mid-1;
        }
        if(arr[mid]>x){
         e=mid-1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastOccurence(int *arr,int size,int x){
int s=0;
int e=size-1;
int mid=(s+e)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==x){
        ans=mid;
        s=mid+1;
    }
    if(arr[mid]>x){
        e=mid-1;
    }
    if(arr[mid]<x){
        s=mid+1;
    }
    mid=(s+e)/2;
}
return ans;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
        input(arr,size);
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    cout<<"FIRST OCCURENCE OF "<<x<<" IS "<<firstOccurenceOfelement(arr,size,x)<<endl;
    cout<<"LAST OCCURENCE OF "<<x<<" IS "<<lastOccurence(arr,size,x)<<endl;

    return 0;
} 