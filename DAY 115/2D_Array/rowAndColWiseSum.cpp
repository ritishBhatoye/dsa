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

vector<int> rowWiseSum(vector<vector<int>> &arr,int row,int col)
{
    vector<int> sum;
    for(int i=0;i<row;i++)
    {
        int total=0;
        for(int j=0;j<col;j++)
        {
            total+=arr[i][j];
        }
        sum.push_back(total);

    }
    return sum;
}
vector<int> colWiseSum(vector<vector<int>> &arr,int row,int col)
{
    vector<int> sum;
    for(int i=0;i<col;i++)
    {
        int total=0;
        for(int j=0;j<row;j++)
        {
            total+=arr[j][i];
        }
        sum.push_back(total);

    }
    return sum;
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
    cout<<"Print 2D Array :- "<<endl;
    print2DArr(a,row,col);
    cout<<endl<<endl;
   
    vector<int> rowAns=rowWiseSum(a,row,col);
    cout<<"Row Wise Sum :- "<<endl;
    for(int i=0;i<rowAns.size();i++)
    {
        cout<<rowAns[i]<<" ";
    }

    cout<<endl<<endl;
    // vector<vector<int>> productAns=matrixTranspose(a,row,col);
    vector<int> colAns=colWiseSum(a,row,col);
    for(int i=0;i<colAns.size();i++)
    {
        cout<<colAns[i]<<" ";
    }
    
    cout<<endl<<endl;
    // int ans=countNumberOfZero(a,row,col);
    cout<<endl<<endl;
    // cout<<"Total Count of numbers :- "<<ans<<endl;

    cout<<endl<<endl;

    return 0;
}