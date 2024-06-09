#include<iostream>
using namespace std;

void inputArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotateArrayLeftByDPosition(int *arr,int size,int d){
    d=d%size;

    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<size;i++){
        arr[i-d]=arr[i];
    }

    for(int i=size-d;i<size;i++)
    {
        arr[i]=temp[i-(size-d)];
    }

    printArr(arr,size);

}   

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;

    int *arr=new int[size];
    cout<<endl<<endl;

    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    
    cout<<endl<<endl;
    cout<<"ENTER THE POSITION FOR WHICH YOU WANT TO MOVE IT :- ";
    int d;
    cin>>d;
    cout<<endl<<endl;
    cout<<"AFTER ROTATING :- ";
    rotateArrayLeftByDPosition(arr,size,d);

    return 0;
}