#include<iostream>
#include<vector>

using namespace std;


void inputArr(vector<vector<int>> &arr,int col,int row)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<"Enter the row : "<<i<<" and col : "<<j<<" :- ";
            cin>>arr[i][j];
        }
    }
}

void printArr(vector<vector<int>> &arr,int col,int row)
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<int> linearSearch(vector<vector<int>> &arr,int col ,int row,int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main()
{
    int col,row;
    cout<<endl<<endl;
    cout<<"Enter the col :- ";
    cin>>col;
    cout<<"Enter the row :- ";
    cin>>row;
    cout<<endl<<endl;
    vector<vector<int>> arr(row, vector<int>(col));
  
    cout<<"Enter the Elements :- "<<endl;
    inputArr(arr,col,row);
    cout<<"Entered Elements :- "<<endl;
    printArr(arr,col,row);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Enter the element you want to search :- "<<endl;
    int k;
    cin>>k;
    vector<int> ans=linearSearch(arr,row,col,k);
    if(ans[0]==-1 && ans[1]==-1)
    {
        cout<<"Element "<<k<<" is not present in the array "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is present at row : "<<ans[0]<<" and col : "<<ans[1]<<endl;
    }
    cout<<endl<<endl;

    return 0;
}