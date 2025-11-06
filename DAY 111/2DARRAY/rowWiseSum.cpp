#include<iostream>
#include<vector>
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

vector<int> rowWiseSum(vector<vector<int>> &arr,int row,int col)
{
    int sum=0;
    vector<int> ans;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        ans.push_back(sum);
    }
    return ans;
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
    vector<int> ans=rowWiseSum(arr,row,col);
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<"Sum of row "<<i<<" :- "<<ans[i]<<endl;
    }
    cout<<endl<<endl;
    
    cout<<endl<<endl;


    return 0;
}