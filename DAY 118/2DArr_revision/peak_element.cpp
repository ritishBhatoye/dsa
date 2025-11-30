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

int rowMaxIndex(vector<vector<int>> &arr,int row,int col)
{
    int maxi=INT_MIN;
    int ans=-1;
  
    for(int i=0;i<row;i++)
    {
        if(maxi < arr[i][col])
        {
            maxi=arr[i][col];
            ans=i;
        }
    }
    return ans;
}

vector<int> peakElement(vector<vector<int>> &arr)
{
    int n=arr.size();
    int m=arr[0].size();

    int s=0;
    int e=m-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        int maxRowIndex=rowMaxIndex(arr,n,mid);
        int left=mid-1 >=0 ? arr[maxRowIndex][mid-1]:-1;
        int right = mid+1<m ? arr[maxRowIndex][mid+1]:-1;

        if(left < arr[maxRowIndex][mid] && right < arr[maxRowIndex][mid])
        {
            return {maxRowIndex,mid};
        }
        else if(arr[maxRowIndex][mid] < left)
        {
            
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return {-1,-1};
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
    vector<int> ans=peakElement(arr);
    if(ans[0]==-1 && ans[1]==-1)
    {
        cout<<"Peak Element does not exist "<<endl;
    }

    cout<<"Peak element is present at Row : "<<ans[0]<<" and at Col : "<<ans[1]<<endl;


    cout<<endl<<endl;

   
    cout<<endl<<endl;
    cout<<endl<<endl;

}