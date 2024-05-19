#include<iostream>
using namespace std;

void inputArr(int *arr,int size){
    cout<<"ENTER THE NUMBER OF ELEMENT IN AN ARRAY : "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArray(int *arr,int size){
    cout<<"ELEMENTS ENTERED BY USER :- "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int max(int *arr,int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {

        if(max<arr[i]){
         max=arr[i];
        }

    }
    return max;
}

int min(int *arr,int size)
{
    int min=INT_MAX;

    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;
    cout<<endl<<endl;

    int *arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);

    printArray(arr,size);
    cout<<endl;

    cout<<"MINIMUM : "<<min(arr,size)<<endl;
    cout<<endl;
    cout<<"MAXIMUM : "<<max(arr,size)<<endl;

    cout<<endl<<endl;


    delete[] arr;
    return 0;
}