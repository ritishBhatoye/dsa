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

int SecLar(int *arr,int size)
{
   int Lar=arr[0];
   int SecLar=-1;
    for(int i=0;i<size;i++)
    {
            if(arr[i] > Lar)
            {   
                SecLar=Lar;
                Lar=arr[i];
            }
            else if(arr[i] < Lar && arr[i]>SecLar)
            {
                SecLar=arr[i];
            }
    }

return SecLar;
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
    cout<<"SECOND LARGEST :- "<<SecLar(arr,size)<<endl;
    cout<<endl;
    return 0;
}