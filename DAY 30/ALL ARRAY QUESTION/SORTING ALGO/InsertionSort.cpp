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

void insertionSort(int *arr,int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>temp)
        { 
            //SHIFTING INTO LEFT SIDE
        arr[j+1]=arr[j];
        }
        else
        {
            //BREAK
            break;
        }
    } 
   arr[j+1]=temp;
    }
print(arr,size);
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ELEMENT "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    insertionSort(arr,size);
    return 0;
}