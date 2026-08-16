#include<iostream>
using namespace std;

pair<int,int> minAndMax(int* arr,int size)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
        }
    }

    for(int i=0;i<size;i++)
    {
        if(mini > arr[i])
        {
            mini=arr[i];
        }
    }
    return {maxi,mini};
}

int main()
{
    cout<<endl<<endl;
    int arr[6]={10,20,4,3,5,80};
    cout<<endl<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    pair<int,int> ans = minAndMax(arr,  size);
    cout<<endl<<endl;
    cout<<"MAX :- "<<ans.first<<endl;
    cout<<"MIN :- "<<ans.second<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
