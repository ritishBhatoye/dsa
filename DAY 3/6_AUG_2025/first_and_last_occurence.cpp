#include<iostream>
using namespace std;
void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int firstOcc(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;
    int ans=0;
    while(s!=e)
    {
        if(k==arr[mid]){
            e=mid-1;
            ans=mid;
        }

         if(k>arr[mid]){
            s=mid+1;
        }
         if(k<arr[mid]){
            e=mid-1;
         }
         mid=s+(e-s)/2;

    }
return ans;

}
int LastOcc(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;
    int ans=0;
    while(s!=e)
    {
        if(k==arr[mid]){
            s=mid+1;
            ans=mid;
        }

         if(k>arr[mid]){
            s=mid+1;
        }
         if(k<arr[mid]){
            e=mid-1;
         }
         mid=s+(e-s)/2;

    }
return ans;

}
int main(){
    cout<<endl;
    int size;
    cout<<"Size : ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
     
    printArr(arr,size);
    cout<<"Enter the number to find the occurence"<<endl;
    int k;
    cin>>k;
    int FirstOCC=firstOcc(arr,size,k);
    int lastOCC=LastOcc(arr,size,k);
    cout<<"Last Occurence :- "<<lastOCC;
    cout<<"First Occurence :- "<< FirstOCC;
    cout<<endl;

    return 0;
}