#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int FirstOccurence(int *arr,int size,int x){
int s=0;
int e=size-1;
int ans=-1;
int mid=(s+e)/2;
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
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    int x;
    cout<<"ENTER THE ELEMENT "<<endl;
    cin>>x;
    cout<<"FIRST OCCURENCE OF AN ELEMEMNT "<<x<<" IS AT "<<FirstOccurence(arr,size,x)<<endl;
    return 0;
}