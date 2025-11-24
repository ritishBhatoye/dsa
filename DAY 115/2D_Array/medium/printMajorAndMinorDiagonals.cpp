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


vector<vector<int>> printMinorAndMajorDiagonal(vector<vector<int>> &arr,int row,int col)
{
    vector<vector<int>> ans;
    vector<int> temp;
    for(int i=0;i<row;i++)
    {
       
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                temp.push_back(arr[i][j]);
            }
        }
    }
    ans.push_back(temp);
 
    temp.clear();
    int limit=min(row,col);
    for(int i=0;i<limit;i++)
    {
        temp.push_back(arr[i][col-1-i]);
    }
    ans.push_back(temp);

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
    vector<vector<int>> ans=printMinorAndMajorDiagonal(arr,row,col);
    cout<<"MAJOR AND MINOR TRAVERSAL :- "<<endl;
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}