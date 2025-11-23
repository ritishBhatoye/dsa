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

bool checkIfIdentity(vector<vector<int>> &arr,int row,int col)
{
    for(int i=1;i<=row-1;i++)
    {
        for(int j=1;j<=col-1;j++)
        {
            if(i==j)
            {
                if(arr[i-1][j-1]!= arr[i][j])
                {
                    return false;
                    break;
                }
            }
        }
    }
    return true;
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
    
    if(checkIfIdentity(arr,row,col))
    {
        cout<<"Matrix is IDENTITY "<<endl;
    }
    else
    {
        cout<<"Matrix is not in IDENTITY "<<endl;
    } 
    cout<<endl<<endl;

    return 0;
}