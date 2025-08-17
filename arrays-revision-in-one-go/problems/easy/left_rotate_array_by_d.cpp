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
void reverse_arr(int* arr,int s,int e)
{
   
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}

void left_rotate_array_by_d(int* arr,int size,int d)
{
    if(d>size)
    {
        d = d % size;
    }

    //reversing first part of the array
    reverse_arr(arr,0,d-1);

    //reversing the remaining part of an array
    reverse_arr(arr,d,size-1);


    //reversing entire array to get the rotation result
    reverse_arr(arr,0,size-1);


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
    int d;
    cout<<"Enter the number of places for which you want to rotate an array :- ";
    cin>>d;
    cout<<endl<<endl;
    cout<<"Array after rotating by one :- ";
    left_rotate_array_by_d(arr,size,d);
    cout<<endl<<endl;

    print_arr(arr,size);

    cout<<endl<<endl;

    return 0;
}