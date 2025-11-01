#include<iostream>
using namespace std;

int removeDupFromSortArr(int *arr,int size)
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
void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
   
    int arr[6]={1,1,2,2,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<endl<<endl;
    int ans=removeDupFromSortArr(arr,size);
    
    cout<<endl<<endl;
    printArr(arr,ans);
    cout<<endl<<endl;

    return 0;
}