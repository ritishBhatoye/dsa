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

void swapAlternative(int* arr,int size)
{

    for(int i=0;i<size;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
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
    cout<<"Array After alternatively swapping ";
    cout<<endl<<endl;
    swapAlternative(arr,size);
    cout<<endl;
 
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}