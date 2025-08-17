#include<iostream>
using namespace std;

void input_arr(int* arr,int size)
{
    cout<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl;

}

void print_arr(int* arr,int size)
{
    cout<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void insert_element(int* arr,int size,int k,int index)
{
    if(index>size-1 || index<0)
    {
        cout<<"Enter the valid INDEX "<<endl;
    }

    for(int i=size;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=k;
    size++;
    print_arr(arr,size);
}

int main()
{

    int size;
    cout<<endl<<endl;
    cout<<"Enter the size  of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size+1];
    input_arr(arr,size);
    cout<<endl<<endl;
    
    print_arr(arr,size);
    cout<<endl<<endl;
    int index;
    int k;
    cout<<"Enter the element you want to insert :- ";
    cin>>k;
    cout<<endl<<endl;
    cout<<"Enter the index at which  you want to insert element :- ";
    cin>>index;
    cout<<endl<<endl;

    cout<<"After insertion of element at "<<index<<" index "<<endl;
    insert_element(arr,size,k,index);
    cout<<endl<<endl;

    return 0;
}