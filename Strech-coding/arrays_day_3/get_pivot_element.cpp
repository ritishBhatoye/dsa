#include<iostream>
#include <utility> 

using namespace std;

 void inputArr(int* arr,int size)
 {
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element of an array at "<<i<<" ";
        cin>>arr[i];
    }
 }

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int get_pivot_element(int* arr,int size){
    int s=0;
    int e=size-1;

    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]>=arr[0])
        {
            s=mid+1;

        }
        else{
            e=mid;
        }
    }
return s;
}

int main(){
    cout<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl;
    int* arr=new int[size];
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
   
    int result=get_pivot_element(arr,size);
    cout<<endl;
    cout<<"Pivot Element "<<result;
    cout<<endl;

    return 0;
}