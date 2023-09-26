//IN THIS SORTING PROCESS
//STEP 1  ELEMENT IS SELECTED SMALLER THAN CURRENT ELEMENT
//STEP 2  SWAPPING OF THESE TWO ELEMENT 
//SIMPLE APPROACH 
//IN THS A VARIABLE IS CREATE WITH TEMP NAME AND INT 
//WHICH CURRENT INDEX OF 'i' IS STORED AFTER SWAPING
// IT IS CHANGED TO 'j'

#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void SelectionSort(int *arr,int size){
    for(int i=0;i<size;i++){
        int temp=i;
        for(int j=i+1;j<size;j++){
              if(arr[temp]>arr[j])
              {   temp=j;}
        }
        swap(arr[temp],arr[i]);
    }
    print(arr,size);
}
int main(){
    int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    SelectionSort(arr,size);
    return 0;
}