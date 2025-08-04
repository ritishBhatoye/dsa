#include<iostream>
using namespace std;

void inputArray(int* arr,int size)
{
cout<<"ENTER THE ELEMENTS IN THE ARRAY :- "<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseAnArray(int* arr ,int size){
    int i=0;
    int j=size-1;

while (i<j){
    swap(arr[i++],arr[j--]);
}
printArr(arr,size);
}

int main(){
    cout<<endl;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;
    int* arr=new int[size];
    inputArray(arr,size);
    cout<<endl;
    cout<<"BEFORE REVERSING IT "<<endl;
    printArr(arr,size);
    cout<<"AFTER REVERSING IT"<<endl;
    reverseAnArray(arr,size);
    cout<<endl;
    cout<<endl;
    return 0;
}