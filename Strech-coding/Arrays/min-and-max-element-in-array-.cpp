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
pair<int,int> minMaxElement(int* arr,int size)
{
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    return {max,min};

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
    cout<<"Max element : "<<minMaxElement(arr,size).first<<endl;
    cout<<"Min element : "<<minMaxElement(arr,size).second<<endl;

    cout<<endl<<endl;
    cout<<endl;
 
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}