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

vector<int> colWiseSum(vector<vector<int>> &arr,int row,int col)
{
    int sum=0;
    vector<int> ans;

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            sum+=arr[j][i];
        }
        ans.push_back(sum);
        sum=0;
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
    vector<int> ans=colWiseSum(arr,row,col);
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<"Sum of Col "<<i<<" :- "<<ans[i]<<endl;
    }
    cout<<endl<<endl;
    
    cout<<endl<<endl;


    return 0;
}