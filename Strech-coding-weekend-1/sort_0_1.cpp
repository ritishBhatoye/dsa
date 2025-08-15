#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void inputArr(int* arr,int size)
{
 for(int i=0;i<size;i++)
 {
    cout<<"Enter the element at "<<i<<" :- ";
    cin>>arr[i];
 }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void sort_0_1(int* arr,int size)
{
    int s=0;
    int e=size-1;
    
    while(s<e){
        if(arr[s]>arr[e])
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]<arr[e])
        {
            s++;
            e--;
        }
        else if(arr[s]==0 && arr[e]==0)
        {
            s++;
        }
        else if(arr[s]==1 && arr[e]==1)
        {
            e--;
        }
    }
}


int main(){

    int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"After implementation :- "<<endl;
    sort_0_1(arr,size);
    printArr(arr,size);
    


    cout<<endl<<endl;

    return 0;
}