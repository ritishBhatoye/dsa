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

vector<int> spiralPrint(vector<vector<int>> &arr,int row,int col)
{
    vector<int> ans;

    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endCol=col-1;

    int count=0;
    int total=row*col-1;
    while(count < total)
    {
        for(int i=startRow;i<=endCol && count <total ;i++)
        {
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;
        

        for(int i=startRow;i<=endRow && count <total;i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;
        
        for(int i=endCol;i>=startRow && count <total;i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;
        
        for(int i=endRow;i>=startRow && count <total;i--)
        {
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
   

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
    vector<int> ans=spiralPrint(a,row,col);
    cout<<endl<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}