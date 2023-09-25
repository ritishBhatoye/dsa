//SEARCH IN ROTATED AND SORTED ARRAY 
#include<iostream>
using  namespace std;
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
int PivotElement(int *arr,int size){
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

int BinarySearchinRotatedNSortedArr(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int pivot=PivotElement(arr,size);
    while(s<e){
        if(arr[pivot]<=x && x<=arr[size-1]){
            //IF TRUE APPLY BS ON SECOND LINE 
        return BinarySearch(arr,pivot,size-1,x);
        }
        else{
            //IF FALSE APPLY BS ON FIRST LINE 
         return BinarySearch(arr,0,pivot-1,x);
        }
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
    int x;
    cout<<endl;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    if(BinarySearchinRotatedNSortedArr(arr,size,x)==-1){
        cout<<x<<" ELEMENT IS NOT PRESENT IN AN ARRAY "<<endl;
    }
    else{
        cout<<x<<" ELEMENT IS PRESENT IN AN ARRAY AT POSITION "<<BinarySearchinRotatedNSortedArr(arr,size,x)<<endl;
    }
    return 0;
}