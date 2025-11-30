#include<iostream>
#include<vector>

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

bool checkIdentityDiagonal(vector<vector<int>> &arr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                if(arr[i]!=arr[j]) return false;
            }
        }
    }
    return true;
}

bool checkSquareIdentityDiagonal(vector<vector<int>> &arr,int n,int m)
{
    
    bool checkSquare=m==n;
    bool checkIdentityDiagonalAns=checkIdentityDiagonal(arr,n,m);

    if(checkSquare && checkIdentityDiagonalAns)
    {
        return true;
    }
return false;
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
    if(checkSquareIdentityDiagonal(arr,row,col))
    {
        cout<<"ARRAY is Square,Identity and Diagonal"<<endl;
    }
    else
    {
        cout<<"ARRAY is NOT Square,Identity and Diagonal"<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;

}