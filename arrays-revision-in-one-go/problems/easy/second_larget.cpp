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

int second_larget(int* arr,int size){

    int sL=-1;
    int l=INT_MIN;
    if (size < 2) return -1;
    for(int i=0; i<size ; i++)
    {
        if(arr[i]>l)
        {   
            sL=l;
            l=arr[i];
        }
        else if(arr[i]>sL && arr[i]<l)
        {
            sL=arr[i];
        }

    }
    return (sL == INT_MIN) ? -1 : sL; 
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
    int ans=second_larget(arr,size);
    if(ans==-1){
        cout<<"No Second Largest element  exist in an array ";
    }
    else{
        cout<<"Second Largest element in an array :- ";
    }
    cout<<ans;
    cout<<endl<<endl;

    return 0;
}