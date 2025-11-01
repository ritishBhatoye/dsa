#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void inputArr(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++)
    
    {
        cout<<"Enter the element at :- ";
        cin>>arr[i];
    }
}

void printArr(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int longestSubarrayWithSumK(vector<int>& a,long long k)
{
    long long sum=a[0];
    int left=0,right=0;
    int maxLen=0;
    int n=a.size();

    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right < n) sum+=a[right];
    }
    return maxLen;
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    vector<int>arr(size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    cout<<"Enter the value of the K :- "<<endl;
    cin>>k;
    int ans=longestSubarrayWithSumK(arr,k);
    
    cout<<endl<<endl;
    cout<<"Longest Subarray some :- "<<ans<<endl;
    cout<<endl<<endl;
    return 0;
}
