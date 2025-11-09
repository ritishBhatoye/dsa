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



bool binarySearch(vector<vector<int>> &arr,int k)
{
    int n=arr.size();
    int m=arr[0].size();

    int low = 0;
    
    int high = m*n - 1;

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
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    cout<<endl<<endl;

    cout<<endl<<endl;

    bool ans=binarySearch(arr,k);

    if(ans)
    {
        cout<<"Element "<<k<<" is present in the array "<<endl;
    }
    else
    {
        cout<<"Element is not present in the array"<<endl;
    }


    cout<<endl<<endl;


    return 0;
}