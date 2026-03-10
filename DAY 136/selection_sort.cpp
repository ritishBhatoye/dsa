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
    for(int i=0;i<size;i++)
    {
        int minI=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[minI] > arr[j])
            {
                minI=j;
            }
        }
        swap(arr[minI],arr[i]);
    }
}
//using the recursion
void selectionSortRec(int* arr,int size)
{
    if(size==0 || size==1)
        return ;
    
    int k=0;
    for(int i=1;i<size;i++)
    {
        if(arr[k] > arr[i])
        {
            k=i;
        }
    }
    swap(arr[k],arr[size-1]);

    selectionSortRec(arr,size-1);

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