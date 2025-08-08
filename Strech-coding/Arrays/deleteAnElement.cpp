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

void deletionInAnArray(int* arr, int& size, int k) {
    int index = -1;


    for (int i = 0; i < size; i++) {
        if (arr[i] == k) {
            index = i;
            break;
        }
    }


    if (index != -1) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
        cout << "Element " << k << " deleted successfully.\n";
    } else {
        cout << "Element not found in the array.\n";
    }
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
    cout<<"Enter the element to DELETE :- ";
    int k;
    cin>>k;
    cout<<endl;

    cout<<endl<<endl;
deletionInAnArray(arr,size,k);
    cout<<"After DELETION of new element :- ";
    printArr(arr,size);
    cout<<endl<<endl;


    return 0;
}