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
int BinarySearch(int *arr,int start,int end,int x){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int pivotElement(int *arr,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int SearchInRotNSorted(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    int pivot=pivotElement(arr,size);
    while(s<e){
        if(arr[pivot]<=x && x<=arr[size-1]){
            //IF THIS CONDITION IS TRUE THEN BS IS APPLIED ON THE SECOND LINE {1,2,3}
            //IF FALSE THEN IT WILL BE APPLIED ON FIRST LINE {7,9}
           // s=mid+1;
            return BinarySearch(arr,pivot,size-1,x);
        }
        else{
           // e=mid;
            return BinarySearch(arr,s,pivot-1,x);
        }

        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    print(arr,size);
    cout<<endl;
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    if(SearchInRotNSorted(arr,size,x)==-1){
     cout<<x<<" ELEMENT IS  NOT PRESENT IN AN ARRAY "<<endl;
   }
    else{
      cout<<x<<" ELEMENT IS PRESENT IN AN ARRAY AT "<<SearchInRotNSorted(arr,size,x)<<endl;
     
    }
    return 0;
}