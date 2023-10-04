//IN SELECTION SORT IS AN ALGO IN WHICH WE NEED TO USE  VARIABLE FOR STORING ELEMENT OF AN ARRAY
//
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
    //BASE CASE
    if(size==0 || size==1){
        return ;
    }
    //BASE CASE
    int i=0;
    int minI=i;
    while(i<size)
    {
    if(arr[minI]>arr[i]){
         minI=i;
        i++;
    }
    }
}


void SelectionSort(int *arr,int size){
    
    for(int i=0;i<size;i++){
        //CURRENT SMALLEST ELEMENT 
        int minI=i;
         for(int j=i+1;j<size;j++){
            if(arr[minI]>arr[j]){
                //NEW SMALLEST ELEMNT
                minI=j;
            }
         }
         swap(arr[minI],arr[i]);
    }
}

int main(){
    int *arr;
    cout<<endl;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<endl;
    print(arr,size);
    SelectionSort(arr,size);
    cout<<endl;
    cout<<"SELECTION SORT : "<<endl;
    print(arr,size);
    cout<<endl<<endl;
    return 0;
}