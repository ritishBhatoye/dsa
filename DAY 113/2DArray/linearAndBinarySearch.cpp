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

bool linearSearch(vector<vector<int>> &arr,int row,int col,int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                return true;
                break;
            }
        }
    }
    return false;
}
bool binarySearchIn2D(vector<vector<int>> &arr,int k)
{
    int m=arr.size();
    int n=arr[0].size();

    int low=0;
    int high=m*n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        int row=mid/m;
        int col=mid%m;

        if(arr[row][col]==k)
        {
            return true;
        }
        else if(arr[row][col]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return false;
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
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    cout<<endl<<endl;
    cout<<endl<<endl;
    if(binarySearchIn2D(arr,k))
    {
        cout<<"Element "<<k<<" is present "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is NOT present "<<endl;
    }

    cout<<endl<<endl;

    return 0;
}