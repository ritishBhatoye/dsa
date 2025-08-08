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
//Brute force approach
int secondLargestElement(int* arr,int size)
{
    int largest=arr[0];
    int sLargest=-1;

    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest && arr[i]>sLargest)
        {
            sLargest=arr[i];
        }
    }
    return sLargest;
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
    int result=secondLargestElement(arr,size);
    cout<<"Second Largest Element = "<<result;

    cout<<endl;

    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}