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

bool binarySearch(vector<vector<int>> &arr,int k)
{
   
    int m=arr.size();
    int n=arr[0].size();
    int s=0;
    int e=m*n;
    while(s<e)
    {
        int mid=((e-s)+s)/2;
        

        int row=mid / m;
        int col= mid % m;

        if(arr[row][col]==k)
        {
            return true;
        }
        else if(arr[row][col] < k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return false;
   
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
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    cout<<endl<<endl;

    if(binarySearch(arr,k))
    {
        cout<<"Element "<<k<<" is PRESENT in the array "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is NOT PRESENT in the array "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;

}