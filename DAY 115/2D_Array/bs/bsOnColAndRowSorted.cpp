#include<iostream>
#include<vector>

using namespace std;

void  input2DArr(vector<vector<int>> &arr,int row,int col)
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
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}


bool bsOn2DColRowSorted(vector<vector<int>> &arr,int row,int col,int k)
{
    

    for(int i=0;i<row;i++)
    {
        int j=0;
        if(arr[i][j])
        {

        }
    }
}

int main()
{
    int row;
    int col;
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<"Enter the row : ";
    cin>>row;
    cout<<"Enter the col : ";
    cin>>col;

    vector<vector<int>> arr(row,vector<int>(col));

    cout<<endl<<endl;
    input2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"BEFORE ROTATION :- "<<endl;
    print2DArr(arr,row,col);
    cout<<endl<<endl;
    cout<<endl<<endl;
   
    cout<<"ROTATE 2D ARRAY BY 90 DEG :- "<<endl;
    cout<<endl<<endl;
    vector<vector<int>> ans=rotateBy90(arr,row,col);
    print2DArr(ans,row,col);
    cout<<endl<<endl;

    cout<<endl<<endl;

    return 0;
}