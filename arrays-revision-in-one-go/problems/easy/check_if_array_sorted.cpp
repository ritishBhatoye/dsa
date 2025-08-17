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

bool check_if_array_sorted(int* arr,int size){

   int s=0;
   int e=size-1;
   while(s<e)
   {
    if(arr[s]>arr[e])
    {
        return false;
        break;
    }

    s++;
    e--;
   }
   return true;
}
bool check_if_array_sorted_opt(int* arr,int size){

    for(int i=0;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
            break;
        }
    }
    return true;
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
    bool ans=check_if_array_sorted_opt(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is NOT sorted ";
    }

    cout<<endl<<endl;

    return 0;
}