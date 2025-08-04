#include<iostream>
using namespace std;


void inputArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"ENTER ELEMENT AT "<<i<<":";
        cin>>arr[i];
    }
}

void printArr(int* arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// Linear Search
bool ls(int* arr,int size,int k){
for(int i=0;i<size;i++){
    if(k==arr[i]){
        return true;
    }
}
return false;
}
// Binary Search

bool bs(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;

    while(s!=e)
    {
        if(k==arr[mid]){
            return true;
        }

         if(k>arr[mid]){
            s=mid+1;
        }
         if(k<arr[mid]){
            e=mid-1;
         }
         mid=s+(e-s)/2;

    }
return false;

}

int main(){
    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY : ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"ENTER THE ELEMENT TO SEARCH : ";
    int k;
    cin>>k;
    bool isPresent=bs(arr,size,k);
    if(isPresent){
        cout<<"Element "<<k<<" is present in an Array"<<endl;
    }
    else{
        cout<<"Element "<<k<<" is NOT present in an Array"<<endl;
    }
    cout<<endl;
    cout<<endl;

    return 0;
}