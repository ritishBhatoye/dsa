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

int countFreq(vector<vector<int>> &arr,int row,int col,int k)
{
    int cnt=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                cnt++;
            }
        }
    }
    return cnt;
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
    int k;
    cout<<"Enter the element for which you want to get the frequency count in array :- ";
    cin>>k;
    int ans=countFreq(arr,row,col,k);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"FREQUENCY OF "<<k<<" "<<ans<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;


    return 0;
}