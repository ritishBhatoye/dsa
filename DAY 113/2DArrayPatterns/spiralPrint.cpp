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



vector<int> printSpiralOrder(vector<vector<int>> &arr)
{
    vector<int> ans;

    int n=arr.size();
    int m=arr[0].size();
    int count = 0;
    int total=m*n;

    int row=0;
    int col=0;
    int endRow=n-1;
    int endCol=m-1;

    
    while(count<total)
    {
        for(int i=row;count<total && i<=endCol;i++)
        {
            ans.push_back(arr[row][i]);
            count++;
        }
        row++;

        for(int i=row;count<total && i<=endRow;i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        for(int i=endCol;count<total && i>=col;i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        for(int i=endRow;i<count && i>=row;i--)
        {
            ans.push_back(arr[i][col]);
            count++;
        }
        col++;
    }
    return ans;
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

    vector<int> ans=printSpiralOrder(arr);
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