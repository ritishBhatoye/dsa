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
bool checkArraySorted(int* arr,int size){
    int s=0;
    int e=size-1;
    while(s<=e)
    {
        if(arr[s++]>arr[e--]){
            return false;
            break;
        }
    }
    return true;
}
// Optmized approach
bool checkArraySortedOPT(int*arr, int size){
    int j=-1;
    for(int i=j+1;i<size;i++)
    {
        if(arr[j]>arr[i]){
            return false;
        }
        j++;
    }
    return true;
}

//more optimized approach 

bool checkArraySortedHIGLYOPT(int* arr,int size)
{
for(int i=1;i<size;i++){
    if(arr[i-1]<=arr[i])
    {

    }
    else {
        return false;
    }
}
return true;
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

    
    if(checkArraySortedOPT(arr,size)){
        cout<<"Array is SORTED"<<endl;
    }
    else{
        cout<<"Array is NOT SORTED"<<endl;
    }

    cout<<endl;

    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}