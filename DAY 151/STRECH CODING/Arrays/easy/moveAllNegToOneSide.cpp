#include<iostream>
#include<vector>
using namespace std;

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void moveAllNegToOneSideORDERLY(int* arr,int size)
{
    vector<int> p;
    vector<int> n;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0)
        {
            p.push_back(arr[i]);
        }
    }

     for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            p.push_back(arr[i]);
        }
    }

}

void moveAllNegToOneSide(int* arr,int size)
{
    int s=0;
    int e=size-1;

    while(s<=e)
    {
       if(arr[s]<0 && arr[e]>=0)
       {
        swap(arr[s++],arr[e--]);
       }
       else if(arr[s]>=0)
       {
        s++;
       }
       else if(arr[e]<0)
       {
          e--;
       }
    }
}

int main()
{
    int arr[8]={ 1, -1, 3, 2, -7, -5, 11, 6 };
    cout<<endl<<endl;
    int size =  sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size);
    cout<<endl<<endl;
    moveAllNegToOneSide(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
