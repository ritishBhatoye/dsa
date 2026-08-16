#include<iostream>
using namespace std;

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortO12(int* arr,int size)
{
    int countZero=0;
    int countOne=0;
    int countTwo=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            countZero++;
        }
        else if(arr[i]==1)
        {
            countOne++;
        }
        else if(arr[i]==2)
        {
            countTwo++;
        }
    }

    int i=0;

    while(i<size && countZero!=0)
    {
        arr[i]=0;
        i++;
        countZero--;
    }
    while(i<size && countOne!=0)
    {
        arr[i]=1;
        i++;
        countOne--;
    }
    while(i<size && countTwo!=0)
    {
        arr[i]=2;
        i++;
        countTwo--;
    }

}

int main()
{
// [0, 1, 2, 0, 1, 2]
    cout<<endl<<endl;
    int arr[6]={0, 1, 2, 0, 1, 2};
    cout<<endl<<endl;



    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size);
    cout<<endl;
    sortO12(arr,size);
    cout<<"After Sorting "<<endl;

    cout<<endl<<endl;
    printArr(arr,size);

    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
