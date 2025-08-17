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
//using bubble sort
void sort(int* arr,int size)
{
   for(int i=0;i<size;i++)
   {
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
    }
   }
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
    sort(arr,size);
    cout<<endl<<endl;
    print_arr(arr,size);
    cout<<endl<<endl;

    return 0;
}