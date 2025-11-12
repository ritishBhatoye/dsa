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
            // cout<<arr[i][j]<<" ";
        }
    }
    else
    {
        for(int j=row-1;j>=0;j--)
        {
            ans.push_back(arr[j][i]);
            // cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
  }
  return ans;
}




int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row number :- ";
    cin>>row;
    cout<<"Enter the col number :- ";
    cin>>col;
    
    cout<<endl<<endl;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<endl<<endl;
    cout<<"Enter elements in to matrix :- ";
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);
   
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Printing like a wave :- ";
    vector<int> ans=wavePrint(arr,row,col);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
   
    cout<<endl<<endl;
    
    cout<<endl<<endl;

    return 0;
}