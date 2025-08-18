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

int max_consec_one(int* arr,int size)
{
    int count=0;
    int ans=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
            ans=max(ans,count);
        }
        else
        {
            count=0;
        }
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
    int ans=max_consec_one(arr,size);

    cout<<"Count of max consecutive one :- "<<ans<<endl;
   
    cout<<ans<<endl;

    cout<<endl<<endl;



    cout<<endl<<endl;

    return 0;
}