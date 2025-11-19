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

vector<int> printRowMajor(vector<vector<int>> &arr,int row,int col)
{
    vector<int> ans;
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            ans.push_back(arr[i][j]);
        }
    }

    return ans;
}

vector<int> printColMajor(vector<vector<int>> &arr,int row,int col)
{
    vector<int> ans;

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            ans.push_back(arr[j][i]);
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
    cout<<"Printing Row Major :- "<<endl;
    vector<int> ansPrintRowMajor=printRowMajor(a,row,col);
    for(int i=0;i<ansPrintRowMajor.size();i++)
    {
        cout<<ansPrintRowMajor[i]<<" ";
    }

    cout<<endl<<endl;
    cout<<"Printing Col Major :- "<<endl;
    vector<int> ansPrintColMajor=printColMajor(a,row,col);
    for(int i=0;i<ansPrintColMajor.size();i++)
    {
        cout<<ansPrintColMajor[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}