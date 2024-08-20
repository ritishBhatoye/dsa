#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int *moveZerosToEnd(int *arr,int size)
{
    int j=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0){
            j=i;
            break;
        }    
    }

    if(j==-1) return arr;

    for(int i=j+1;i<size;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
return arr;
}


int main()
{   
    int size;
    int *arr=new int[size];
    cout<<"ENTER THE SIZE OF THE ARRAY ";
    cin>>size;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"AFTER MOVING ZEROS TO AN END "<<endl;
    int* a=moveZerosToEnd(arr,size);
    printArr(a,size);
    cout<<endl;
    return 0;
}