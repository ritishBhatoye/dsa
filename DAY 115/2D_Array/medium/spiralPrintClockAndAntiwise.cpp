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

vector<int> spiralPrint(vector<vector<int>> &arr,int row,int col)
{
    vector<int>ans;
    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endCol=col-1;
    int count=0;
    int total=row*col;

    while(count < total)
    {
        for(int i=startRow;i<=endCol && count<total;i++)
        {
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;

        for(int i=startRow;i<=endRow && count<total ;i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        for(int i=endCol;i>=startCol && count<total;i--)
        {
            // cout<<"endRow :  "<<endRow<<" i : "<<i<<endl;
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        for(int i=endRow;i>=startRow && count<total ;i--)
        {
            cout<<"startCol :  "<<startCol<<" i : "<<i<<endl;
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }

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
    
    vector<int> ans=spiralPrint(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}