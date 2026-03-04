#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" = ";
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

int partition(int* arr,int s,int e)
{
    int pivot = arr[s];
    int pivotIndex = 0;
    int cnt=0;
    for(int i=s+1 ; i<=e;i++)
    {
        if(pivot >= arr[i])
        {
            cnt++;
        }
    }
    pivotIndex = s+ cnt;

    swap(arr[s],arr[pivotIndex]);


    int i=s,j=e;

    while(i< pivotIndex && j > pivotIndex)
    {
        while(i < pivotIndex && arr[i] <= pivot)
        {
            i++;
        }
        while(j > pivotIndex  && arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex &&  j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
return pivotIndex;
}

void quickSort(int* arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }

    int p = partition(arr,s,e);


    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of an array :- ";
    cin>>size;

    int* arr = new int[size];
    cout<<endl<<endl;
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    quickSort(arr,0,size-1);
    cout<<"After applying quick sort :- ";
    cout<<endl<<endl;

    printArr(arr,size);

    cout<<endl<<endl;

    return 0;
}