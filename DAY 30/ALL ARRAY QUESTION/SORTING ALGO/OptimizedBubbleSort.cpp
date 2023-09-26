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


void BubbleSort(int *arr,int size){
    bool Swap=false;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                Swap=true;
            }
        }
        if(Swap==false){
            break;
        }
    }
print(arr,size);
}
int main(){
 int size;
 cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
 cin>>size;
 int arr[size];
 input(arr,size);
 BubbleSort(arr,size);
    return 0;
}