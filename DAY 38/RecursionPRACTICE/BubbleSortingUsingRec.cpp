#include<iostream>
using namespace std;

void BubbleSort(int *arr,int size){
    //base case
    if(size==0 || size==1){
        return ;
    }
  else
{ for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    BubbleSort(arr,size-1);}
}

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
int main(){
int *arr;
int size;
cout<<endl<<endl;
cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
cin>>size;
arr=new int[size];
cout<<endl<<endl;
input(arr,size);
cout<<endl;
print(arr,size);
cout<<endl<<endl;
BubbleSort(arr,size);
cout<<"AFTER THE SORTING "<<endl;
print(arr,size);
cout<<endl<<endl;
    return 0;
}