#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int SecondLargest(int *arr,int size){
    int lar=arr[0];
    int sec=-1;
    for(int i=0;i<size;i++){
        if(arr[i] > lar)
        {
            sec=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>sec){
            sec=arr[i];
        }
    }
    return sec;
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"ENER THE ELEMENTS :- "<<endl;
    inputArr(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS :- "<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"SECOND LARGEST ELEMENT IN THE ARRAY :- "<<SecondLargest(arr,size)<<endl;
    cout<<endl;
    return 0;
}
