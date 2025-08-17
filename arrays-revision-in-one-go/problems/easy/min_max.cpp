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

pair<int,int> min_max(int* arr,int size)
{
   
    
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<size;i++)
    {
        if(arr[i] < min)
        {
            min=arr[i];
        }
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }

    return {min,max};
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
    pair<int,int> ans=min_max(arr,size);
    cout<<"Min Element : "<<ans.first<<" "<<"Max Element : "<<ans.second;
    cout<<endl<<endl;

    return 0;
}