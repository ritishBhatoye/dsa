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
   if(d>size){
    d=d%size;
   }
   
   else
   {int rem=arr[0];
   for(int i=1;i<=size;i++)
   {
    arr[i-1]=arr[i];
   }
   arr[size-1]=rem;
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
    int d=1;
    cout<<"AFTER MOVING ARRAY LEFT BY ONE"<<endl;
    moveLeftByOne(arr,size,d);

    cout<<endl;
    return 0;
}