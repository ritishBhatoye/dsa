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

int linear_search(int* arr,int size,int k)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            return i;
            break;
        }
    }
    return -1;
}

void delete_element(int* arr,int size,int k)
{
    int delete_index=linear_search(arr,size,k);
    if(delete_index==-1)
    {
        cout<<"Please enter valid item value "<<endl;
    }   
    else
    {
        for(int i=delete_index;i<size;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    print_arr(arr,size-1);
}

int main()
{

    int size;
    cout<<endl<<endl;
    cout<<"Enter the size  of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    input_arr(arr,size);
    cout<<endl<<endl;
    
    print_arr(arr,size);
    cout<<endl<<endl;   
    int k;
    cout<<"Enter the Item you want to delete :- ";
    cin>>k;
    cout<<endl<<endl;
    delete_element(arr,size,k);
    cout<<endl<<endl;

    return 0;
}