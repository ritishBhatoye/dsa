
#include<iostream>
#include <climits>
#include <utility>

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
int longest_subarray_sum_k(vector<int>& arr,long long k)
{
    int size=arr.size();
   int left=0;  
   int right=0;
    vector<int> ans;
    int maxLen=0;
    long long sum=arr[0];
    while(right<size)
    {
        while(left<=right && sum > k)
        {
            sum=-arr[left];
        }
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right < size )
        {
            sum=sum+arr[right];
        }
    }
  return maxLen;
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
    long long k;
    cout<<"Enter the target :- ";
    cin>>k;
    print_vector(arr);
    cout<<endl<<endl;   
    int ans=longest_subarray_sum_k(arr,k);
    cout<<"Longest Subarray with given Sum K(Positives) :- "<<ans<<endl;
   


    cout<<endl<<endl;

    return 0;
}