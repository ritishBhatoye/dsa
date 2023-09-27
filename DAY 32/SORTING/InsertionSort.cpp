

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
void InsertionSort(int *arr,int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
           if(arr[j]>temp){
            //SHIFTING TO THE LEFT SIDE
            arr[j+1]=arr[j];
           }
           else{
            //BREAK:
            break;

           }
        j--;
        }
       arr[j+1]=temp;
    }
    print(arr,size);
}
int main(){
    int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    cout<<"AFTER SORTING "<<endl;
    InsertionSort(arr,size);
    return 0;
}