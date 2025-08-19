
#include<iostream>
#include <climits>
#include <utility>
#include <vector>

using namespace std;
void input_vector(vector<int>& arr,int size)
{
    cout<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
}

void print_vector(vector<int>& arr)
{
    cout<<endl;

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
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

void sort(vector<int>& arr,int size)
{
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[j]<arr[i]){
            swap(arr[j],arr[i]);
        }
    }
}
}
int sum_arr(vector<int>& arr,int s,int e)
{
    int sum=0;

    for(int i=s;i<e;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
vector<int> push_to_arr(vector<int>& arr,int s,int e)
{
    vector<int> ans;
    for(int i=s;i<e;i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}

void sort_0_1_2(vector<int>& arr,int size)
{
    int start=0;
    int mid=0;
    int end=size-1;

    while(mid<=end)
    {
        if(arr[mid] > arr[end])
        {
            swap(arr[mid],arr[end]);
            end--;
            mid++;
        }
        else if(arr[mid] < arr[start])
        {
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        
        else
        {
            mid++;
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
    vector<int> arr(size);
    input_vector(arr,size);
    cout<<endl<<endl;

    print_vector(arr);
    cout<<endl<<endl;   
    sort_0_1_2(arr,size);
    cout<<"After sorting 0,1 or 2 :- "<<endl;
    print_vector(arr);
   


    cout<<endl<<endl;

    return 0;
}