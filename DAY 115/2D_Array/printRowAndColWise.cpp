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

void printRowWise2DArr(vector<vector<int>> &arr,int row,int col)
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
void printColWise2DArr(vector<vector<int>> &arr,int row,int col)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
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
    cout<<"Print Row Wise :- "<<endl;
    printRowWise2DArr(a,row,col);
    cout<<endl<<endl;
    cout<<"Print Col Wise :- "<<endl;
    printColWise2DArr(a,row,col);
    cout<<endl<<endl;
    // vector<vector<int>> productAns=matrixTranspose(a,row,col);

    cout<<endl<<endl;
    // int ans=countNumberOfZero(a,row,col);
    cout<<endl<<endl;
    // cout<<"Total Count of numbers :- "<<ans<<endl;

    cout<<endl<<endl;

    return 0;
}