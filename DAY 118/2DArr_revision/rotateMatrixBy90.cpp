#include<iostream>
#include<vector>
#include<climits>

using namespace std;


void input2DArr(vector<vector<int>> &arr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Enter the element at row : "<<i<<" and at col "<<j<<" = ";
            cin>>arr[i][j];
        }
    }
}

void print2DArr(vector<vector<int>> &arr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector

vector<int> spiralPrint(vector<vector<int>> &arr,int row,int col)
{
   vector<int> ans;

    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endCol=col-1;
    
    int count=0;
    int size=row*col-1;
    
    while(count<=size)
    {
        //firstRow
        for(int i=startRow;i<=endCol && i<=size ;i++)
        {
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;
        //lastCol
        for(int i=startRow;i<=endRow && i<=size ;i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        //lastRow;

        for(int i=endCol;i>=startCol && i<=size ;i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        //firstCol
        for(int i=endRow;i>=startRow && i<=size ;i--)
        {
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
    int row;
    int col;
    cout<<endl<<endl;
    
    cout<<"Enter the row :- ";
    cin>>row;
    cout<<"Enter the col :- ";
    cin>>col;

    cout<<endl<<endl;
    cout<<endl<<endl;

    vector<vector<int>> arr(row,vector<int>(col));
    
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<"Printing Matrix like a wave :- "<<endl;
    vector<int> ans=spiralPrint(arr,row,col);
    
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
   
    cout<<endl<<endl;
    cout<<endl<<endl;

}