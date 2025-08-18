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

int find_missing_number_in_array(int* arr,int size)
{
    int j=1;

    for(int i=0;i<size;i++)
    {
        if(arr[i]!=j)
        {
            return j;
            break;
        }
        
        j++;
    }
    return -1;
}

// more optmized

int find_missing_number_in_array_opt(int* arr,int size){
    int element_sum=0;
    int sum=(size*(size+1))/2;

    for(int i=0;i<size;i++)
    {
        element_sum=element_sum+arr[i];
    }
    return sum-element_sum;
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
    int ans=find_missing_number_in_array_opt(arr,size);

    if(ans!=-1)
    {
        cout<<"Missing Number :- "<<ans<<endl;
    }
    else
    {
        cout<<"No Missing Number "<<endl;
    }
   
    cout<<ans<<endl;

    cout<<endl<<endl;



    cout<<endl<<endl;

    return 0;
}