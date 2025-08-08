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

void sort_0_1(int* arr,int size)
{
    int s=0;
    int e=size-1;


    while(s<=e)
    {
        if(arr[s]>arr[e]){
            swap(arr[s++],arr[e--]);
        }
        else if(arr[e]==0)
        {
            s++;
        }
        else{
        s++;
        e--;
        }
    }   

    printArr(arr,size);

}

// more optimzed 
void sort_0_1_opt(int* arr,int size)
{
    int s=0;
    int e=size-1;

    while(s<e){
        if(arr[s]==1 && arr[e]==0)
        {
            swap(arr[s++],arr[e--]);
        }
        if(arr[s]==0)
        {
            s++;
        }
        if(arr[e]==1)
        {
            e--;
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
cout<<"SORTING 0 and 1"<<endl;
sort_0_1(arr,size);


    cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}