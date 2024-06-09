#include<iostream>
using namespace std;

void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}

bool ifSorted(int *arr,int size)
{
 for(int i=1;i<size;i++){
 if(arr[i]>=arr[i-1]){

 }
 else{
    return false;
 }
 }
 return true;
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY ";
    cin>>size;
    int *arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    if(ifSorted(arr,size)){
        cout<<"ARRAY IS SORTED "<<endl;
    }

    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }

    return 0;
}