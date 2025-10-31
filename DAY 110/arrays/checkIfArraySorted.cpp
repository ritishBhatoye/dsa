#include<iostream>
using namespace std;

bool checkIfArrSorted(int *arr,int size)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i-1] > arr[i])
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
        int arr[5]={1,2,5,4,1};
        if(checkIfArrSorted(arr,5))
        {
            cout<<"ARRAY IS SORTED "<<endl;
        }
        else
        {
            cout<<"Array is NOT SORTED "<<endl;
        }
        return 0;
}