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


bool checkIfArrIsIdentity(vector<vector<int>> &arr)
{
    int n=arr.size();
    int m=arr[0].size();

    for(int row=1;row<n;row++)
    {
        for(int col=1;col<m;col++)
        {
            if(row==col)
            {
                if(arr[row-1][col-1]!=arr[row][col])
                {
                    return false;
                }
            }
        }
    }
    return true;
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
    if(checkIfArrIsIdentity(arr))
    {
        cout<<"Array is having IDENTITY behaviour"<<endl;
    }
    else
    {
        cout<<"Array is NOT having IDENTITY behaviour"<<endl;
    }

    cout<<endl<<endl;

    return 0;
}