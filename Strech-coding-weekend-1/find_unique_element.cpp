#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" : ";
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

int find_unique_element(int* arr,int size)
{
int ans=0;
for(int i=0;i<size;i=i+2)
{
    ans=ans^arr[i];
}
return ans;
}

int main(){

    int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl;
    int ans=find_unique_element(arr,size);
    cout<<"Unique Element :- "<<ans<<endl;
    


    cout<<endl<<endl;

    return 0;
}