#include<iostream>

using namespace std;

void inputArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int largestElement(int* arr,int size)
{
    int l= INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(l < arr[i])
        {
            l=arr[i];
        }
    }
    return l;
}

int secondLargest(int* arr,int size)
{
    int s=INT_MIN;
    int l=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]>l)
        {
            s=l;
            l=arr[i];
        }
        else if(arr[i]<l && arr[i]>s)
        {
            s=arr[i];
        }
    }
    if(s==INT_MIN)
        return -1;
    return s;
}

bool checkIfArraySorted(int* arr,int size)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
                return false;
    }
    return true;
}

int removeDupFromSortArr(int* arr,int size)
{
    int i=0;

    for(int j=1;j<size;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

void rotateLeftByOne(int* arr, int size)
{
    int first = arr[0];
    for(int i=1;i<size;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[size-1]=first;
}

void reverseArr(int* arr, int s, int e)
{
    while(s<=e)
    {
        swap(arr[s++],arr[e--]);
    }
}
void rotateLeftByK(int* arr,int size,int k)
{
    if(k>size)
    {
        k = size % k;
    }
    reverseArr(arr,0,k-1);
    reverseArr(arr,k,size-1);

    reverseArr(arr,0,size-1);
    // int* a = new int[k];

    // for(int i=k;i<size;i++)
    // {
    //     a[i]=arr[i];
    // }


}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;

    int size;
    cout<<"Enter the size :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    printArr(arr,size);
    cout<<"Largest :- "<<largestElement(arr,size)<<endl;
    cout<<"Second Largest :- "<<secondLargest(arr,size);

    cout<<endl<<endl;
    if(checkIfArraySorted(arr,size))
    {
        cout<<"Array is sorted "<<endl;
    }
    else
    {
        cout<<"Array is not SORTED"<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    int nSize=removeDupFromSortArr(arr,size);
    cout<<endl<<endl;
    // printArr(arr,nSize);
    cout<<endl<<endl;
    cout<<endl<<endl;

    // rotateLeftByOne(arr,size);
    cout<<endl<<endl;

    // printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int d;
    cout<<"Enter the number of rotation :- ";
    cin>>d;
    rotateLeftByK(arr,size,d);
    cout<<endl<<endl;
    cout<<"After "<<d<<" Rotation"<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}

