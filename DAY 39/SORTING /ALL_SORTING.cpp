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

void selectionSort(int *arr,int size){
    for(int i=0;i<size;i++){
        int minI=i;
        for(int j=i+1;j<size;j++){
            if(arr[minI]>arr[j]){
               minI=j;
            }
        }
           swap(arr[minI],arr[i]);
    }
}
void insertionSorting(int *arr,int size){
    for(int i=0;i<size;i++){
        int temp=arr[i];
        int j=i-1;

        while(j>=0){
            if(arr[j]>temp){
                //SHIFTING TO RIGHT
                arr[j+1]=arr[j];
            }
        }
        arr[j+1]=temp;
    }
}

void BubbleSort(int *arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i;i<size;i++){
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
        }
    }
}

int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr;
    arr=new int[size];
    input(arr,size);
    cout<<"ENTERRED ELEMENT IN AN ARRAY : "<<endl;
    print(arr,size);
    cout<<endl<<endl;
    cout<<"AFTER APPLYING SELECTION SORT : "<<endl;
    selectionSort(arr,size);
    cout<<endl<<endl;
    print(arr,size);
    cout<<endl<<endl;
    cout<<"AFTER APPLYING INSERTION SORT : "<<endl;
    selectionSort(arr,size);
    cout<<endl<<endl;
    print(arr,size);
    cout<<endl<<endl;
     cout<<"AFTER APPLYING BUBBLE SORT : "<<endl;
    selectionSort(arr,size);
    cout<<endl<<endl;
    print(arr,size);
    cout<<endl<<endl;
    return 0;
}