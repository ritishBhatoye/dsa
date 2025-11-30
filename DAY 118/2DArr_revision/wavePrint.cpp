#include<iostream>
#include<vector>

using namespace std;


void input2DArr(vector<vector<int>> &arr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Enter the element at row : "<<i<<" and at col "<<j<<" = ";
            cin>>arr[i][j];
        }
    }
}

void print2DArr(vector<vector<int>> &arr,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
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
        if(i%2==0)
        {
            for(int j=0;j<row;j++)
            {
               ans.push_back(arr[j][i]);
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                ans.push_back(arr[j][i]);
            }
        }
        cout<<endl;
    }
    return ans;
}


int main()
{
    cout<<endl<<endl;
    int row;
    int col;
    cout<<endl<<endl;
    
    cout<<"Enter the row :- ";
    cin>>row;
    cout<<"Enter the col :- ";
    cin>>col;

    cout<<endl<<endl;
    cout<<endl<<endl;

    vector<vector<int>> arr(row,vector<int>(col));
    
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<"Printing Matrix like a wave :- "<<endl;
    vector<int> ans=wavePrint(arr,row,col);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

   
    cout<<endl<<endl;
    cout<<endl<<endl;

}