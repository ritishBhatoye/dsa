#include<iostream>
#include<vector>
#include<climits>

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



bool searchInRowNColSorted(vector<vector<int>> &arr,int k)
{
    int row=arr.size()-1;
    int col=arr[0].size();
    int i=0;
    int j=col-1;

    while(i<row && j>=0)
    {
        if(arr[i][j]==k)
        {
            return true;
        }
        else if(arr[i][j]< k)
        {
            i++;
        }
        else
        {
            j++;
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
    int k;
    cout<<"Enter the element :- ";
    cin>>k;
    cout<<endl<<endl;
    if(searchInRowNColSorted(arr,k))
    {
        cout<<"Element "<<k<<" is PRESENT in the ARRAY "<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is NOT PRESENT in the Array "<<endl;
    }

    cout<<endl<<endl;

   
    cout<<endl<<endl;
    cout<<endl<<endl;

}