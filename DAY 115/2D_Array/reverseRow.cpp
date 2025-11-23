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

void printWithEachRowReverse(vector<vector<int>> &arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=col-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}
void printWithEachColReverse(vector<vector<int>> &arr,int row,int col)
{
    for(int i=row-1;i>=0;i--)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
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
   
    // int rowAns=rowWiseSum(a,row,col);
    // cout<<"Row Wise Sum :- "<<rowAns<<endl;

    cout<<endl<<endl;
    // vector<vector<int>> productAns=matrixTranspose(a,row,col);
    // int colAns=colWiseSum(a,row,col);
    // cout<<"Col Wise Sum "<<colAns<<endl;
    
    cout<<endl<<endl;
    printWithEachRowReverse(a,row,col);
    // int ans=countNumberOfZero(a,row,col);
    cout<<endl<<endl;
    // cout<<"Total Count of numbers :- "<<ans<<endl;
    cout<<"Reverse Col Wise  :- "<<endl;
    printWithEachColReverse(a,row,col);
    cout<<endl<<endl;

    return 0;
}