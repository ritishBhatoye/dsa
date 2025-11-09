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

vector<int> wavePrint(vector<vector<int>> &arr,int row,int col)
{
    vector<int> ans;
   for(int i=0;i<col;i++)
   {

        if(col&1)
        {
            for(int j=row-1;j>=0;j--)
            {
                ans.push_back(arr[i][j]);
            }
        }   
        else
        {
            for(int j=0;j<row;j++)
            {
                ans.push_back(arr[i][j]);
            }
        }    

   }
   return ans;
}

int main()
{
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row number :- ";
    cin>>row;
    cout<<"Enter the col number :- ";
    cin>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);

    cout<<endl<<endl;
   
    cout<<endl<<endl;

    cout<<endl<<endl;
    vector<int> ans=wavePrint(arr,row,col);
    cout<<"Wave Print :- "<<endl;
    cout<<endl<<endl;
    print2DArr(ans,row,col);
    cout<<endl<<endl;
    
    cout<<endl<<endl;


    return 0;
}