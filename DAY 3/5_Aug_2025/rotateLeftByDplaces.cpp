#include<iostream>
using namespace std;

void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element at "<<i<<" : ";
        cin>>arr[i];
    }
}
void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseAnArr(int* arr, int s,int e)
{
  

    while(s<e)
    {
swap(arr[s++],arr[e--]);
    }

}

void rotateLeftByK(int* arr,int size,int k)
{

    if(k>size)
    {
        k=k%size;
    }

    int j=0;
   //REVERSING FIRST ONE
    reverseAnArr(arr,0,k-1);
   //REVERSING SECOND ONE
   reverseAnArr(arr,k,size-1);

   reverseAnArr(arr,0,size-1);
    

    printArr(arr,size);
}

int  main()
{

    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY : ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"Enter the number of places for which you want to rotate the Array : ";
    int k;
    cin>>k; 
    cout<<endl;
    cout<<"AFTER Rotating Array Left By "<<k<<" Places ";
    rotateLeftByK(arr,size,k);
     

    cout<<endl;
    cout<<endl;

    return 0;
}