#include<iostream>
#include "arrayUtils.h" 
using namespace std;

void inputArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at " << i << " : ";
        cin >> arr[i];
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int binarySearch(int* arr,int size,int k)
{

    int s=0;
    int e=size-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            s=mid+1;
        }
        else if(arr[mid]<k){
            e=mid-1;
        }


    }
    return -1;

}

int main(){
    int  size;
    cout<<endl<<endl;
    
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);

    cout<<endl<<endl;
    int k;
    cout<<"Enter element to search :- ";
    cin>>k;
    cout<<endl<<endl;
    cout<<"Enter is present at : "<<binarySearch(arr,size,k);
    cout<<endl<<endl;
    

    return 0;
}