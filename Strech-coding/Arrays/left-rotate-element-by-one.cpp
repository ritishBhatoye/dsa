#include<iostream>
using namespace std;

void inputArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at " << i << " : ";
        cin >> arr[i];
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void leftRotateElementByOne(int* arr, int size)
{
    int last=arr[0];
    for(int i=1;i<size;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[size-1]=last;

    printArr(arr,size);
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array ";
    cin>>size;
    cout<<endl;
    int* arr=new int[size];
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);

    cout<<endl;
    cout<<"After rotating it by one place"<<endl;
    cout<<endl;
    leftRotateElementByOne(arr,size);
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}