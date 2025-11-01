#include<iostream>
#include<vector>
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

int missingNumber(vector<int> &arr)
{
    int size=arr.size();

    int sum=((size+1) *(size+2))/2;
    int sum_elements=0;
    for(int i=0;i<size;i++)
    {
        sum_elements=sum_elements+arr[i];
    }
    cout<<"Sum of elments :- "<<sum_elements<<endl;
    cout<<"Sum :- "<<sum<<endl;

    int ans=sum-sum_elements;
    return ans;
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
    int ans=missingNumber(arr);
    
    cout<<endl<<endl;
    cout<<"ANS :- "<<ans<<endl;
    cout<<endl<<endl;
    return 0;
}