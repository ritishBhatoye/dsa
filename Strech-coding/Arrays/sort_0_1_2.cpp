#include<iostream>
#include<vector>
#include<algorithm>
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



// more optimzed  DUTCH FLAG ALGORITHM
void sort_0_1_2(int* arr,int size)
{
int low=0;
int mid=0;
int high=size-1;

while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==1)
    {
        mid++;
    }
    else 
    {
        swap(arr[mid],arr[high]);
        high--;
    }
}
}
int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array Array :- ";
    cin>>size;
cout<<endl;
int* arr=new int[size];

inputArr(arr,size);
cout<<endl;

printArr(arr,size);
cout<<endl;
cout<<"SORTING 0 and 1 and 2 : ";
sort_0_1_2(arr,size);
printArr(arr,size);

    cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}