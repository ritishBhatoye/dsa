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

int lar(int *arr,int size)
{
   int max=arr[0];
    for(int i=0;i<size;i++)
    {
            if(arr[i]>max)
            {
                max=arr[i];
            }
    }
return max;
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
    cout<<"LARGEST :- "<<lar(arr,size)<<endl;
    cout<<endl;
    return 0;
}