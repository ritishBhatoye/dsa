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
            cout<<"Enter the element at row :- "<<i<<" and at col :- "<<j<<" = ";
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
        cout<<endl;
    }
}

vector<int> minAndMax(vector<vector<int>> &arr,int row,int col)
{
    int mini=INT_MAX;
    int maxi=INT_MIN;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] > maxi)
            {
                maxi=arr[i][j];
            }
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return {maxi,mini};
}

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row number :- ";
    cin>>row;
    cout<<"Enter the col number :- ";
    cin>>col;
    
    cout<<endl<<endl;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<endl<<endl;
    cout<<"Enter elements in to matrix :- ";
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);
    
    cout<<endl<<endl;
    cout<<endl<<endl;
   
    vector<int>ans=minAndMax(arr,row,col);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}