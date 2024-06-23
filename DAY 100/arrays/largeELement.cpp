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
int largestElement(int *arr,int size)
{   
    int lar=arr[0];
    for(int i=0;i<size;i++){
        if(lar<arr[i]){
            lar=arr[i];
        }

    }
return lar;
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
    cout<<"LARGEST ELEMENT IN THE ARRAY :- "<<largestElement(arr,size)<<endl;
    cout<<endl;
    return 0;
}
