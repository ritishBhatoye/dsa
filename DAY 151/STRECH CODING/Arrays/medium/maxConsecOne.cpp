#include<iostream>
using namespace std;

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int maxConsecOne(int* arr,int size)
{
    int cnt=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
            cnt++;
        else
            cnt=0;

    }
return cnt;
}


int main()
{
    cout<<endl<<endl;
    int arr[6]={1, 1, 0, 1, 1, 1};

    cout<<endl<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Max Consecutive One :- "<<maxConsecOne(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
