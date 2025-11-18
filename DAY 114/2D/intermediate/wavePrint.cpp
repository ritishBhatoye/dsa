#include<iostream>
#include<vector>

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

vector<int> wavePrint(vector<vector<int>> &arr)
{
    vector<int> ans;
    int row=arr.size();
    int col=arr[0].size();

    for(int i=0;i<col;i++)
    {
    if(col%2==0)
    {
        for(int j=0;j<row;j++)
        {
            // cout<<arr[i][j]<<" ";
            ans.push_back(arr[j][i]);
        }
    }
    else
    {
        for(int j=row-1;j>=0;j--)
        {
            // cout<<arr[i][j]<<" ";
            ans.push_back(arr[j][i]);

        }
    }
    }
return ans;
}

int main()
{
    cout<<endl<<endl;
    int row,col;
    // cout<<"Enter the row :- ";
    // cin>>row;
    // cout<<"Enter the col :- ";
    // cin>>col;

    // vector<vector<int>> a(row,vector<int>(col));
    vector<vector<int>> a={{1 , 2} , {3 , 4}};

    cout<<endl<<endl;

    cout<<endl<<endl;   
    // input2DArr(a,row,col);
    cout<<endl<<endl;
    print2DArr(a,2,2);
    cout<<endl<<endl;
    
    cout<<endl<<endl;
    // vector<vector<int>> productAns=matrixTranspose(a,row,col);

    cout<<endl<<endl;
    cout<<"Printing like a wave :- "<<endl;
    cout<<endl<<endl;
    vector<int> ans=  wavePrint(a);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}