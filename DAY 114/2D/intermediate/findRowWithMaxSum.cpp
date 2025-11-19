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

int findRowWithMaxSum(vector<vector<int>> &arr,int row,int col)
{
    int ans=0;
    int maxi=INT_MIN;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        if(sum > maxi)
        {
            maxi=sum;
            ans=i;
        }

    }
    return ans;
}


int main()
{
    cout<<endl<<endl;
    int row,col;
    cout<<"Enter the row :- ";
    cin>>row;
    cout<<"Enter the col :- ";
    cin>>col;

    vector<vector<int>> a(row,vector<int>(col));


    cout<<endl<<endl;

    cout<<endl<<endl;   
    input2DArr(a,row,col);
    cout<<endl<<endl;
    print2DArr(a,row,col);
    cout<<endl<<endl;
    
    cout<<endl<<endl;
    // vector<vector<int>> productAns=matrixTranspose(a,row,col);

    cout<<endl<<endl;
    // int ans=countNumberOfZero(a,row,col);
    cout<<endl<<endl;
    // cout<<"Total Count of numbers :- "<<ans<<endl;
    int rowWithMaxSum=findRowWithMaxSum(a,row,col);

    cout<<"Row with max sum :- "<<rowWithMaxSum<<endl;
    cout<<endl<<endl;

    return 0;
}