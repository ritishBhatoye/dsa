#include<iostream>
#include<vector>
#include <climits>

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


int rowMaxIndex(vector<vector<int>> &arr,int n,int m,int col)
{
    int ansIndex=0;
    int ans=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i][col] > ans)
        {
            ans=arr[i][col];
            ansIndex=i;
        }
    }
    return ansIndex;
}

vector<int> findPeakElementIn2D(vector<vector<int>> &arr,int roww,int cols)
{
    int row=arr.size();
    int col=arr[0].size();
    int low=0;
    int high=col-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int maxRowIndex=rowMaxIndex(arr,row,col,mid);

        int left = mid-1 >=0 ? arr[maxRowIndex][mid-1] :-1;
        int right = mid+1 <col ? arr[maxRowIndex][mid+1] :-1;

        if(left< arr[maxRowIndex][mid] && arr[maxRowIndex][mid]>right)
        {
            return {maxRowIndex,mid};
        }
        else if(arr[maxRowIndex][mid]<left)
        {
        high=mid-1;
        }
        else
    {
        low=mid+1;

    }
    }
return {-1,-1};

}


int main()
{

    cout<<endl<<endl;
    int row,col;
    // cout<<"Enter the number of rows :- ";
    // cin>>row;
    // cout<<"Enter the number of col :- ";
    // cin>>col;
    cout<<endl<<endl;
    // vector<vector<int>> arr(row,vector<int>(col));
    vector<vector<int>> arr={{10,20,15},{21,30,14},{7,16,32}};
    // input2DArr(arr,row,col);
    cout<<endl<<endl;
    // print2DArr(arr,row,col);
    row=arr.size();
    col=arr[0].size();
    cout<<endl<<endl;
    vector<int> ans=findPeakElementIn2D(arr,row,col);
    cout<<"ANS :- ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl<<endl;
        

    cout<<endl<<endl;


    return 0;
}