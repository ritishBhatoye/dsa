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

void reverseAnArr(int* arr,int s,int e){

while(s<=e)
{
    swap(arr[s++],arr[e--]);
}
}

void leftRotateElementByDPlace(int* arr, int size,int k)
{
    if(k>size)
    {
        k=k%size;
    }

    //reverse the first order 
    reverseAnArr(arr,0,k-1);

    //reverse the last set of elements
    reverseAnArr(arr,k,size-1);

    //reversing the whole array
    reverseAnArr(arr,0,size-1);



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
    int k;
    cout<<"Enter the number of places for which you want to rotate the Array :- ";
    cin>>k;
    cout<<"After rotating it by "<<k<<" place"<<endl;
    cout<<endl;
    leftRotateElementByDPlace(arr,size,k);
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}