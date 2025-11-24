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

vector<int> boundaryTraversal(vector<vector<int>> &arr,int row,int col)
{
    vector<int> ans;
    int startRow=0;
    int startCol=0;
    int endCol=col-1;
    int endRow=row-1;
    // int count=0;

    for(int i=startRow;i<=endCol;i++)
    {
        ans.push_back(arr[startRow][i]);
    }
    startRow++;

    for(int i=startRow;i<=endRow;i++)
    {
        ans.push_back(arr[i][endCol]);
    }
    endCol--;

    for(int i=endCol;i>=startCol;i--)
    {
        ans.push_back(arr[endRow][i]);
    }
    endRow--;

    for(int i=endRow;i>=startRow;i--)
    {
        ans.push_back(arr[i][startCol]);
    }
    startCol++;


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
    vector<int> ans=boundaryTraversal(arr,row,col);
    cout<<"BOUNDARY TRAVERSAL :- "<<endl;
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}