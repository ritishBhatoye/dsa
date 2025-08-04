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

int sumOfElement(int* arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        // or
        // sum=sum+arr[i];
    }

    return sum;
}

int main(){

    int size;

    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- "; 
    cin>>size;
    int* arr=new int[size];
    inputArr(arr,size);
   
    cout<<endl<<endl;
    printArr(arr,size);
    
    cout<<endl<<endl;
    int result=sumOfElement(arr,size);
    cout<<"SUM : "<<result;
    cout<<endl<<endl;

    return 0;
}