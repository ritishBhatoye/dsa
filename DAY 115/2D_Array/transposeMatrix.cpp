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

vector<vector<int>> matrixTranspose(vector<vector<int>> &arr,int row,int col)
{
    vector<vector<int>> ans;
    for(int i=0;i<col;i++)
    {
        vector<int> tempAns;
        for(int j=0;j<row;j++)
        {
            tempAns.push_back(arr[j][i]);
        }
        ans.push_back(tempAns);
        tempAns.clear();

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
    cout<<endl<<endl;
    vector<vector<int>> ans=matrixTranspose(arr,row,col);

    cout<<endl<<endl;
    cout<<endl<<endl;
    print2DArr(ans,row,col);
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}