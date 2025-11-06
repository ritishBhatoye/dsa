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

void print2DArr(vector<vector<int>> &arr,int row ,int col)
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

int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the number of row :- ";
    cin>>row;
    cout<<"Enter the number of col :- ";
    cin>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    input2DArr(arr,row,col);

    print2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
