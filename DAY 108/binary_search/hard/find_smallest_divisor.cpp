#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>


using namespace std;


int sumOfArr(vector<int>& arr,int div)
{
    int sum=0;

    for(int i=0;i<arr.size();i++)
    {   cout<<"SUM BEFORE :- "<<sum;
        sum+=ceil((double)arr[i]/(double )div);
        cout<<"SUM AFTER :- "<<sum;
    }
    cout<<endl;
    
    cout<<endl;

    return sum;
}

int smallestDivisor(vector<int>& arr, int threshold) 
{
    sort(arr.begin(),arr.end());
    int size=arr.size();
    int s = arr[0];
    int e = arr[size-1];

    while(s<=e)
    {
        int mid=s+(e-s)/2;

        int sum=sumOfArr(arr,mid);
        cout<<endl;

        cout<<"MID "<<mid<<endl;
        cout<<endl;
    
        if(sum<=threshold)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return s;   
}

int main()
{
    cout<<endl<<endl;
    int size;
    vector<int> arr={1,2,5,9};


    // cin>>size;
    
    cout<<endl<<endl;
    int ans=smallestDivisor(arr,6);
    // int ans=sumOfArr(arr,5);
    cout<<"ANS :- "<<ans<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

}