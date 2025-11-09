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

int findRowWithMaxOne(vector<vector<int>>& arr,int row,int col)
{
    int ans=-1;
    int ansRow=0;
    for(int i=0;i<row;i++)
    {
        int oneCnt=0;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==1)
            {
                oneCnt++;
            }
        }
        if(ans < oneCnt)
        {
            ans=oneCnt;
            ansRow=i;
        }
        oneCnt=0;
    }
    return ansRow;
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
    cout<<endl<<endl;
   
    
    cout<<endl<<endl;
    int ans=findRowWithMaxOne(arr,row,col);

    cout<<"Ans :- "<<ans<<endl;
    cout<<endl<<endl;


    return 0;
}