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

void print2DArr(vector<vector<int>> &arr,int row ,int col)
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

bool BS2DArr(vector<vector<int>> &arr,int k)
{
    int n=arr.size();
    int m=arr[0].size();
    int low=0;
    int high=m*n - 1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        int row=mid/m;
        int col=mid%m;

        if(arr[row][col]==k)
        {
            return true;
            break;
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
    cout<<"Enter the number of row :- ";
    cin>>row;
    cout<<"Enter the number of col :- ";
    cin>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    input2DArr(arr,row,col);

    print2DArr(arr,row,col);
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    if(BS2DArr(arr,k))
    {
        cout<<"Element "<<k<<" is PRESENT in the array "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is not PRESENT in the array "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
