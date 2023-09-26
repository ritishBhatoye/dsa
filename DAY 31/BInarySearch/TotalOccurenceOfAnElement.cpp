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

int lastOccurence(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int TotalOccurences(int *arr,int size,int x){
    int total=(lastOccurence(arr,size,x)-FirstOccurence(arr,size,x))+1;
    return total;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    int x;
    cout<<"ENTER THE ELEMENT FOT WHICH YOU WANT TO SEE OCCURENCES "<<endl;
    cin>>x;
    cout<<"FIRST OCCURENCE : "<<FirstOccurence(arr,size,x)<<endl;
    cout<<"LAST OCCURENCE  : "<<lastOccurence(arr,size,x)<<endl;
    cout<<"TOTAL OCCURENCE OF "<<x<<" IS : "<<TotalOccurences(arr,size,x)<<endl;
    return 0;
}