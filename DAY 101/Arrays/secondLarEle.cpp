#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int SecLar(int* arr,int size)
{
    int l = arr[0];
    int s = INT_MIN;

    for(int i=1;i<size;i++)
    {
        if(arr[i]>l)
        {
            s=l;
            l=arr[i];
        }
        else if(arr[i] <l && arr[i] > s)
        {
            s=arr[i];
        }
    }

    if(s==INT_MIN)
    {
        return -1;
    }
    return s;
}



int main()
{
    int size;
    int *arr=new int[size];
    cout<<"ENTER THE SIZE OF THE ARRAY ";
    cin>>size;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"SECOND LARGEST :- "<<SecLar(arr,size)<<endl;
    cout<<endl;
    return 0;
}
