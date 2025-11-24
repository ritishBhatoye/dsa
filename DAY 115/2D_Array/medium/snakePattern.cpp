#include<iostream>
#include<vector>

using namespace std;

void  input2DArr(vector<vector<int>> &arr,int row,int col)
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
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

vector<int> snakePrint(vector<vector<int>> &arr,int row,int col)
{
    vector<int> ans;

    for(int i=0;i<row;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<col;j++)
            {
                // ans.push_back(arr[i][j]);
                cout<<arr[i][j]<<" ";
            }
            
        }
        else
        {
            for(int j=col-1;j>=0;j--)
            {
                // ans.push_back(arr[i][j]);
                cout<<arr[i][j]<<' ';
            }
        }
        cout<<endl;
    }
    return ans;
}

int main()
{
    int row;
    int col;
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<"Enter the row : ";
    cin>>row;
    cout<<"Enter the col : ";
    cin>>col;

    vector<vector<int>> arr(row,vector<int>(col));

    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
    
    print2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
    vector<int> ans=snakePrint(arr,row,col);
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}