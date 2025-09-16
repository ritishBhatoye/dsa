#include<iostream>
#include<vector>
#include <limits.h>
#include <bits/stdc++.h>

using namespace std;

void input_vector(vector<int>& arr)
{
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<"Enter the element at the "<<i<<" :- ";
        cin>>arr[i];
    }
    cout<<endl;

}

void print_vector(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}


        int findMin(vector<int>& arr)
        {
            int mini=0;
            for(int i=0;i<arr.size();i++)
            {
                mini=min(arr[i],mini);
            }
            return mini;
        }
        int findMax(vector<int>& arr)
        {
            int maxi=0;
            for(int i=0;i<arr.size();i++)
            {
                maxi=max(arr[i],maxi);
            }
            return maxi;
        }
    
        int divisorSum(vector<int>& arr,int div)
        {
            int sum=0;
            for(int i=0;i<arr.size();i++)
            {
                sum+=ceil((double)arr[i]/(double)div);
            }
            return sum;
        }
        r
        int smallestDivisor(vector<int>& nums, int threshold) 
        {
            sort(nums.begin(),nums.end());
            int s=0;
            int e=nums.size()-1;
            int ans=0;
            while(s<=e)
            {
                int mid=(s+e)/2;
                cout<<"divisorSum(nums,nums[mid]) "<<divisorSum(nums,nums[mid])<<endl;
                if(divisorSum(nums,nums[mid])<=threshold)
                {
                    cout<<"NUM :- "<<nums[mid]<<endl;
                    ans=nums[mid];
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            return ans; 
        }
    
int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl;
    vector<int> arr(size);  
    cout<<endl<<endl;

    input_vector(arr);
    cout<<endl<<endl;
    print_vector(arr);
    cout<<endl<<endl;
    int ans=smallestDivisor(arr,5);
    cout<<"Ans :- "<<ans;
    cout<<endl<<endl;


    // 44,22,33,11,1
    return 0;
}