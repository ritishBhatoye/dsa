#include<iostream>
using namespace std;

void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int removeDup(int *arr,int size){
    int i=0;
    for(int j=1;j<size;j++){
      if(arr[j]!=arr[i]){  arr[i+1]=arr[j];
        i++;}
    }
    return i+1;
}

int main()
{
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY ";
    cin>>size;

    int *arr=new int[size];
    
    inputArr(arr,size);
    
    cout<<endl<<endl;
    
    printArr(arr,size);
    int nSize=removeDup(arr,size);

    printArr(arr,nSize);

    cout<<endl;
    return 0;
}
