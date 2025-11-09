#include<iostream>
#include<vector>
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

vector<int> linearSearch(vector<vector<int>> &arr,int row,int col,int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
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
    int k;
    cout<<"Enter the element you want to search in array :- ";
    cin>>k;
    vector<int> ans=linearSearch(arr,row,col,k);
    cout<<endl<<endl;
    cout<<endl<<endl;
    if(ans[0]!=-1 && ans[1]!=-1)
    {
        cout<<"Element "<<k<<" is present at row "<<ans[0]<<" and at col "<<ans[1]<<" "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is not present "<<endl;
    }
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}