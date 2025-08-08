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

int largetElement(int* arr,int size){
    int largest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
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

    int result=largetElement(arr,size);
    cout<<"Largest Element : "<<result;
    cout<<endl;

    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}