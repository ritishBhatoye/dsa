#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
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

void moveLeftByOne(int *arr,int size,int d){
if(size==0){
    return;
}
d=d%size;
if(d>size){
    return ;
}

int temp[d];

for(int i=0;i<d;i++){
    temp[i]=arr[i];
}

for(int i=0;i<size-d;i++){
    arr[i]=arr[i+d];
}
for(int i=size-d;i<size;i++){
    arr[i]=temp[i-size+d];
}
printArr(arr,size);
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"ENER THE ELEMENTS :- "<<endl;
    inputArr(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS :- "<<endl;
    printArr(arr,size);
    cout<<endl;
    int d;
    cout<<"ENTER THE NUMBER IF PLACES ";
    cin>>d;
    cout<<"AFTER "<<d<<"NUMBER OF PLACES THE ARRAY WILL BE :- ";
    cout<<"AFTER MOVING ARRAY LEFT BY ONE"<<endl;
    moveLeftByOne(arr,size,d);

    cout<<endl;
    return 0;
}