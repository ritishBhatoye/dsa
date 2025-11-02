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


vector<int> twoSum(vector<int>& arr,int k)
{
 
    for(int i=0;i<arr.size();i++)
    {
      

        for(int j=1;j<arr.size();j++)
        {
            int sum=arr[i]+arr[j];

            if(sum==k)
            {
                return {i,j};
                break;
            }

        }
    }
    return {0,0};
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
    vector<int> ans=twoSum(arr,k);
    
    cout<<"ANS :- "<<endl;
    printArr(ans,ans.size());

    cout<<endl<<endl;
    return 0;
}
