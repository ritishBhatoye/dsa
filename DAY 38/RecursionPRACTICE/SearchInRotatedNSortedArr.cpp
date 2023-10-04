//search in rotated and sorted array
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

int pivotElement(int *arr,int s,int e){
    int mid=(s+e)/2;
    //base case;
    if(s>e){
    return s;
    }
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
int BinarySearch(int *arr,int s,int e,int k){
    int mid=s+(e-s)/2;
//base case
if(s>e){
    return mid+1;
}

//recursive call
if(arr[mid]==k){
    return mid;
}
else{
    if(arr[mid]>k)
{
    return BinarySearch(arr,s,mid-1,k);
}
if(arr[mid]<k){
     return BinarySearch(arr,mid+1,e,k);
}
mid=s+(e-s)/2;
}
}
int SearchRotatedNSortedArr(int *arr,int size,int k)
{    
    
   int pivot=pivotElement(arr,0,size-1);
   if(arr[pivot]<=k && k<=arr[size-1]){
    //BS ON SECOND LINE 
  return BinarySearch(arr,pivot,size-1,k);
   }
   else{
    //BS ON THE FIRST LINE 
    return BinarySearch(arr,0,pivot-1,k);
   }
}



int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :-  "<<endl;
    cin>>size;
    int *arr;
    arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENT IN AN ARRAY :- "<<endl;
    print(arr,size);
    cout<<endl;
   //cout<<"PIVOT ELEMENT IS : AT "<< pivotElement(arr,0,size-1);
   cout<<"ENTER THE ELEMENT TO SEARCH IN AN ARRAY "<<endl;
   int k;
   cin>>k;
   cout<<"ELEMENT IS AT : "<<SearchRotatedNSortedArr(arr,size,k)<<endl;
    cout<<endl<<endl;
    return 0;
}