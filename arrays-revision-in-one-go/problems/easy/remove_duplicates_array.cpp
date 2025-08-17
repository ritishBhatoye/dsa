#include<iostream>
#include <climits>
#include <utility>

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

int remove_dup(int* arr,int size)
{
    int j=0;

    for(int i=1;i<size;i++)
    {
        if(arr[j]!=arr[i])
        {
            arr[j+1]=arr[i];
            j++;
        }
    }
    return j+1;
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
    cout<<endl<<endl;

    cout<<endl<<endl;
    int size_after_remove_dup=remove_dup(arr,size);
    cout<<"Array after removing duplicate :- ";
    print_arr(arr,size_after_remove_dup);

    cout<<endl<<endl;

    return 0;
}