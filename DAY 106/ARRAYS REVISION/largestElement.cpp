#include<iostream>
using namespace std;

void inputArray(int* arr,int size)
{

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}

void printArray(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int LargetElement(int* arr,int size)
{
    int max=0;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int size;

    cout<<endl<<endl;

    cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;
    inputArray(arr,size);
    cout<<endl;
    cout<<"LARGEST ELEMENT IN THE ARRAY :- "<<LargetElement(arr,size)<<endl;
    cout<<endl<<endl;

    return 0;
}