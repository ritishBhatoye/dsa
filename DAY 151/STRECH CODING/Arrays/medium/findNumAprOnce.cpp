#include<iostream>
#include<vector>
using namespace std;


//brute approach

int singleOccur(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        int num=arr[i];
        int cnt=0;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==num)
            {
                cnt++;
            }
        }
        if(cnt==1) return num;
    }
    return -1;
}

// better approach

int singleOccurBA(int* arr,int size)
{
    int maxi=arr[0];

    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,arr[i]);
    }

    vector<int> hash(maxi+1,0);

    for(int i=0;i<size;i++)
    {
        hash[arr[i]]++;
    }

    for(int i=0;i<size;i++)
    {
        if(hash[arr[i]]==1)
            return arr[i];
    }
    return -1;
}


//optimized approach
//0^any number = that number; 5^0 = 5
// num ^ num = 0; XOR with same number
int singleOccurOA(int* arr,int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


int main()
{
    cout<<endl<<endl;
    int arr[5]={4,1,2,1,2};
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Single Occur :- "<<singleOccur(arr,size)<<endl;
    cout<<endl<<endl;
    cout<<"Single Occurrence with Better Approach :- "<<singleOccurBA(arr, size);
    cout<<endl<<endl;

    cout<<"Single Occurrence with Optimized Approach :- "<<singleOccurOA(arr, size);

    cout<<endl<<endl;
return 0;
}
