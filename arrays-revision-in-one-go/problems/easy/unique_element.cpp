

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

int unique_element(int* arr,int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }


    return ans;
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
    int ans=unique_element(arr,size);

    cout<<"Unique Element :- "<<ans<<endl;
   
    cout<<ans<<endl;

    cout<<endl<<endl;



    cout<<endl<<endl;

    return 0;
}