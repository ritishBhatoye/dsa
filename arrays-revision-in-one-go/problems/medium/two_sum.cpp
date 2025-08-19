
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

vector<int> two_sum(vector<int>& arr,int size,int k)
{
 vector<int> ans;

    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                int mini=min(arr[i],arr[j]);
                int maxi=max(arr[i],arr[j]);

                ans.push_back(mini);
                ans.push_back(maxi);


                return ans;

                break;
            }
        }
    }
    return {-1,-1};
}

/// work for only sorted array
vector<int> two_sum_for_sorted_array(vector<int>& arr,int size,int k)
{
    sort(arr,size);
    vector<int> ans;
    int s=0;
    int e=size-1;
   
    while(s<e)
    {   
        int sum=arr[s]+arr[e];
        if(sum==k)
        {
            int mini=min(arr[s],arr[e]);
            int maxi=max(arr[s],arr[e]);

            ans.push_back(mini);
            ans.push_back(maxi);


            return ans;

            break;
        }
        if(sum > k)
        {
            e--;
        }
        else if(sum < k)
        {
            s++;
        }
    }
return {-1,-1};
}


//with very intense optmization

vector<int> two_sum_for_sorted_array_with_extra_space(vector<int>& arr,int size,int k)
{
 unordered_map<int,int> mpp;
vector<int> ans;
 for(int i=0;i<size;i++)
 {
    int num=arr[i];
    int more_needed=k-num;
    //mpp.end() stands for "not found"
    if(mpp.find(more_needed)!=mpp.end())
    {
     
        ans.push_back(i);
        ans.push_back(mpp[more_needed]);


        return ans;

        break;
    }
    mpp[num]=i;
 }
 return {-1,-1};
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
    vector<int> ans= two_sum_for_sorted_array_with_extra_space(arr,size,k);
    if(ans[0]==-1 && ans[1]==-1)
    {
        cout<<"No elements doesn't exist for which sum if eqaul to target"<<endl;
    }
    else
    {
        print_vector(ans);
    }
   


    cout<<endl<<endl;

    return 0;
}