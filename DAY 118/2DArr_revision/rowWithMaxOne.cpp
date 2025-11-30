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

int rowWithMaxOne(vector<vector<int>> &arr,int row,int col)
{
    int maxCount=0;
    int ans=0;
    for(int i=0;i<row;i++)
    {
        int cnt=0;
        
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==1)
            {
                cnt++;
            }
        }
        if(cnt > maxCount){
            ans=i;
            maxCount=cnt;
        }
    }
    return ans;
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
    int ans=rowWithMaxOne(arr,row,col);
    cout<<"Row with maximum one :- "<<ans<<endl;
    cout<<endl<<endl;

   
    cout<<endl<<endl;
    cout<<endl<<endl;

}