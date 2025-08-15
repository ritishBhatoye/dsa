#include<iostream>
#include <cstdlib>
#include<algorithm>
#include<vector>

using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" : ";
    cin>>arr[i];
    }
}

void inputVector(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++){
    cout<<"Enter the element at "<<i<<" : ";
    cin>>arr[i];
    }
}


void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void printVector(const vector<int>& arr){
    int size=arr.size();
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector<vector<int>> pair_sum(vector<int>& arr,int size,int k)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;

    int s=0;
    int e=size-1;
    while(s<e)
    {
        int sum=arr[s]+arr[e];

        if(sum==k)
        {
            vector<int> temp;
            temp.push_back(min(arr[s],arr[e]));
            temp.push_back(max(arr[s],arr[e]));

            ans.push_back(temp);

            int leftVal=arr[s];
            int rightVal=arr[e];

            while(s<e && arr[s]==leftVal) s++;
            while(s<e && arr[e]==rightVal) e--;
        }
        else if(sum < k){
            s++;
        }
        else {
            e--;
        }
    }
return ans;

}



int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of array :- ";
    cin>>size;
    vector<int> arr(size);
    cout<<endl<<endl;
    inputVector(arr,size);
    cout<<endl<<endl;
    
    printVector(arr);
    
    cout<<endl<<endl;
    int target;
    cout<<"Enter the target value :- ";
    cin>>target;
    cout<<endl<<endl;

    vector<vector<int>> ans=pair_sum(arr,size,target);

    for(int i=0;i<ans.size();i++)
    {
        printVector(ans[i]);
    }

    cout<<endl<<endl;


    return 0;
}