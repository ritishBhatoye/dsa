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

void swapAlternative(int* arr,int size)
{
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }

    printArr(arr,size);
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
    cout<<"ARRAY AFTER Alternative Swap "<<endl;
    swapAlternative(arr,size);
    cout<<endl;
    cout<<endl;

    return 0;
}