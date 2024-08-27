#include<iostream>
using namespace std;

void inputArray(int* arr,int size)
{
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int* arr,int size)
{
    cout<<"UNIQUE ELEMENTS IN AN ARRAY ARE :- "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int removeDupSortedArr(int* arr,int size)
{
    

    int uniqueSize=1;
    for(int i=1;i<size;i++)
    {
        if(arr[i]!=arr[uniqueSize-1])
        {

            arr[uniqueSize]=arr[i];
            uniqueSize++;
        }


      
    }
return uniqueSize;

}


int main()
{
    int size;
    cout<<endl<<endl;

    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArray(arr,size);
    cout<<endl<<endl;
    // int *ans=
    // printArr(remove,size);
    int newSize=removeDupSortedArr(arr,size);
    printArr(arr,newSize);
    
    cout<<endl<<endl;



    return 0;
}