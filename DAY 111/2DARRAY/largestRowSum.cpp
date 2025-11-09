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
            cout<<"Enter the element at row : "<<i<<" and col : "<<j<<" = ";
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

int largestRowSum(vector<vector<int>> &arr,int row,int col)
{
    int sum=INT_MIN;
   
    for(int i=0;i<row;i++)
    {
        int rowSum=0;
        for(int j=0;j<col;j++)
        {
            rowSum+=arr[i][j];
        }
        if(rowSum > sum)
        {
            sum=rowSum;
        }
        rowSum=0;
    }
    return sum;
}

int main()
{
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row number :- ";
    cin>>row;
    cout<<"Enter the col number :- ";
    cin>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);

    cout<<endl<<endl;
   
    cout<<endl<<endl;

    cout<<endl<<endl;
    int ans=largestRowSum(arr,row,col);
    cout<<endl<<endl;
    cout<<"Largest Row Sum :- "<<ans;
    cout<<endl<<endl;
    
    cout<<endl<<endl;


    return 0;
}