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

void moves_zero_to_end_opt(int* arr,int size)
{
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0)
        {
            index=i;
            break;
        }
    }

    for(int i=index+1;i<size;i++)
    {
        if(arr[i]!=arr[index])
        {
            swap(arr[i],arr[index]);
            index++;
        }

        
    }
}

void moves_zero_to_end(int* arr,int size)
{
    int s = 0;
    int e = size-1;

    while(s<e)
    {
        if(arr[s]==0 && arr[e]!=0)
        {
            swap(arr[s++],arr[e--]);
        }
        else if(arr[s]==0 && arr[e]==0)
        {
            e--;
        }
        else if(arr[s]==1 )
        {
            s++;
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

    cout<<"Array moving zeros to end :- ";
    moves_zero_to_end_opt(arr,size);
    cout<<endl<<endl;

    print_arr(arr,size);

    cout<<endl<<endl;

    return 0;
}