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
//Find the min element and replace with the current element
void selectionSort(int* arr,int size)
{

    for(int i=size-1;i>=1;i--)
    {
        for(int j=0;j<=i;j++)
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
    selectionSortRec(arr,size);
    printArr(arr,size);
    cout<<endl<<endl;
    return 0;
}