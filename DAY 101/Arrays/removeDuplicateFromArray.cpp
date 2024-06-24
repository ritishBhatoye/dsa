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

int removeDupArray(int *arr,int size)
{
    int i=0;
    for(int j=1;j<size;j++){
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }

    }
    return i+1;
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
    int s=removeDupArray(arr,size);
    printArr(arr,s);
    cout<<endl;
    return 0;
}