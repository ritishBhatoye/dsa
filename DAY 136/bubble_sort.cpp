#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the item at :- "<<i<<" = ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// simply make sure to swap the element recursively those are in the unsorted order
void bubbleSort(int* arr,int size)
{

    for(int i=size-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }


}



int main()
{
    int size;
    cout<<"Enter the size of an array :- "<<endl;
    cin>>size;
    int* arr=new int[size];
    inputArr(arr,size);
    cout<<"After sorting "<<endl;
    bubbleSort(arr,size);
    printArr(arr,size);
    cout<<endl<<endl;
    return 0;
}