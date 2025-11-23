#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void input2DArr(vector<vector<int>> &arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the element at row : "<<i<<" and at col : "<<j<<" = ";
            cin>>arr[i][j];
        }
    }
}

void print2DArr(vector<vector<int>> &arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
}

vector<int> minAndMax(vector<vector<int>> &arr,int row,int col)
{
    int maxi=INT_MIN;
    int mini=INT_MAX;
    vector<int> ans;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            maxi=max(arr[i][j],maxi);
            mini=min(arr[i][j],mini);
        }
    }
    ans.push_back(maxi);
    ans.push_back(mini);

    return ans;
}

int main()
{

    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the number of rows :- ";
    cin>>row;
    cout<<"Enter the number of col :- ";
    cin>>col;
    cout<<endl<<endl;
    vector<vector<int>> arr(row,vector<int>(col));
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);
    cout<<endl<<endl;
    vector<int> ans=minAndMax(arr,row,col);

    cout<<endl<<endl;
    cout<<"MAX : "<<ans[0]<<endl;
    cout<<"MIN : "<<ans[1]<<endl;
    cout<<endl<<endl;
    
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}