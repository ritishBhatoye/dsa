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
void BubbleSortRec(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return;
    }
    
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    //RECURSIVE CALL
    BubbleSortRec(arr,size-1);
}

void BubbleSort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int size;

    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr;
    arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    print(arr,size);
    cout<<endl<<endl;
    cout<<endl;
    BubbleSortRec(arr,size);
    print(arr,size);
    cout<<endl<<endl;

}