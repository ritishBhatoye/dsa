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

int countNumberOfZero(vector<vector<int>> &arr,int row,int col)
{
    int ans=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
            {
                ans++;
            }
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
    // vector<vector<int>> productAns=matrixTranspose(a,row,col);

    cout<<endl<<endl;
    int ans=countNumberOfZero(a,row,col);
    cout<<endl<<endl;
    cout<<"Total Count of numbers :- "<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}