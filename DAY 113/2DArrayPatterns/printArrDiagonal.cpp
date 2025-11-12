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


void printDiagonal(vector<vector<int>> &arr)
{
    int n=arr.size();
    int m=arr[0].size();

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            if(row==col)
            {
                cout<<arr[row][col]<<" ";
            }
        }
    }
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
    cout<<"Print the Diagonal :- ";
    printDiagonal(arr);

    cout<<endl<<endl;

    return 0;
}