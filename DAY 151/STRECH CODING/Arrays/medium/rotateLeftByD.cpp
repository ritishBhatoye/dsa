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
        cout<<arr[i]<<" ";
    }
}


void reverseArr(int* arr, int s, int e)
{
    while(s<=e)
    {
        swap(arr[s++],arr[e--]);
    }
}
//1 2 3 4 5 6 7
//brute force
void rotateLeftByKBrute(int* arr,int size,int k)
{
    if(k>size)
        k=k%size;


    int temp[k];

    for(int i=0;i<k;i++)
    {
        temp[i]=arr[i];
    }

    for(int i=k;i<size;i++)
    {
        arr[i-k]=arr[i];
    }

    for(int i=0;i<k;i++)
    {
        arr[size-k+i]=temp[i];
    }
}

//optimized
void rotateLeftByK(int* arr,int size,int k)
{
    if(k>size)
    {
        k = k % size;
    }

    reverseArr(arr,0, size - 1);
    reverseArr(arr,0, k - 1);
    reverseArr(arr,k, size - 1);
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

    cout<<endl<<endl;
    cout<<endl<<endl;

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
    rotateLeftByKBrute(arr,size,d);
    cout<<endl<<endl;
    cout<<"After "<<d<<" Rotation"<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}

