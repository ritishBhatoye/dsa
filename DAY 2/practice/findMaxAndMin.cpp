#include<iostream>
#include <climits>
#include <utility>
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

pair<int,int> findMaxAndMin(int* arr,int size)
{
  int min=INT_MAX;
  int max=INT_MIN;
  for(int i=0;i<size;i++){
    if(min>arr[i]){
        min=arr[i];
    }
   if(max<arr[i]){
        max=arr[i];
    }
  }
  return {min,max};

}


int main()
{
    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>size;
    cout<<endl;
    int* arr=new int[size];
    inputArr(arr,size);
    cout<<"Printing array :- "<<endl;
    printArr(arr,size);
    pair<int,int> result = findMaxAndMin(arr, size);
    cout<<endl;
    cout << "MIN: " << result.first << ", MAX: " << result.second << endl;
    cout<<endl;

    return 0;
}