#include<iostream>
#include<vector>

using namespace std;

void input2DArr(vector<vector<int>> &arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the element at row :- "<<row<<" and at col :- "<<col<<" = ";
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

vector<int> searchElement(vector<vector<int>> &arr,int n,int m,int k)
{
    int low=0;
    int high=n*m-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        int row=mid/m;
        int col=mid%m;

        if(arr[row][col]==k)
        {
            return {row,col};
        }
        else if(arr[row][col] < k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return{-1,-1};
}

int main()
{
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row :- ";
    cin>>row;
    cout<<"Enter the col :- ";
    cin>>col;

    vector<vector<int>> arr(row,vector<int>(col));
    cout<<endl<<endl;
    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    print2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    cout<<"Enter the element : ";
    cin>>k;
    vector<int> ans=searchElement(arr,row,col,k);
    if(ans[0]!=-1 && ans[1]!=-1)
    {
        cout<<"Element "<<k<<" is present at : row "<<ans[0]<<" and at col : "<<ans[1]<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is NOT PRESENT in the matrix"<<endl;
    }
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}