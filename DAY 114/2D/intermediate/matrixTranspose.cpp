#include<iostream>
#include<vector>

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

vector<vector<int>> matrixTranspose(vector<vector<int>> &arr,int row,int col)
{
    vector<vector<int>> ans(col,vector<int>(row));

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            ans[j][i]=arr[i][j];
        }
    }
    return ans;
}

int main()
{
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row :- ";
    cin>>row;
    cout<<"Enter the col :- ";
    cin>>col;

    vector<vector<int>> a(row,vector<int>(col));


    cout<<endl<<endl;

    cout<<endl<<endl;
    input2DArr(a,row,col);
    cout<<endl<<endl;
    print2DArr(a,row,col);
    cout<<endl<<endl;
    
    cout<<endl<<endl;
    vector<vector<int>> productAns=matrixTranspose(a,row,col);

    cout<<endl<<endl;
   
    cout<<endl<<endl;
    int newRow=productAns.size();
    int newCol=productAns[0].size();
    print2DArr(productAns,newRow,newCol);
    cout<<endl<<endl;

    return 0;
}