#include <iostream>
#include <algorithm> 
#include <cmath>     
#include <vector> 
#include <climits>   


using namespace std;

int findMax(vector<int>& arr)
{   int ans=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        ans=max(arr[i],ans);
    }
    return ans;
}

int calHours(vector<int>& arr,int bananas)
{

    int totalHours=0;

    for(int i=0;i<arr.size();i++)
    {
        totalHours += ceil((float)arr[i] / (float)bananas);

    }
    cout<<" totalHours :- "<<totalHours<<endl;
    return totalHours;

}

int minimumRateToEatBananas(vector<int> v, int h) {
    // sort(v.begin(),v.end());

    int size=v.size();
    int ans=-1;

    int s=1;
    int e=findMax(v);

    
    while(s<e)
    {
        int mid=s+(e-s)/2;

        cout<<endl<<endl;
        // cout<<"FOR "<<mid<<" ANS "<<ans<<endl;
        cout<<endl<<endl;
        
        int calTotalHours=calHours(v,mid);

        if(calTotalHours==h)
        {
            ans=mid;
                   
        }
        else if(calTotalHours<h)
        {
            s=mid+1;   
        }
        else
        {
            e=mid-1;
        }

    }
    return ans;

}

int main()
{
    cout<<endl<<endl;
    vector<int> arr={7 ,15 ,6 ,3};
    cout<<endl<<endl;
    int ans=minimumRateToEatBananas(arr,8);
    cout<<endl<<endl;
    cout<<"ANS :- "<<ans<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}