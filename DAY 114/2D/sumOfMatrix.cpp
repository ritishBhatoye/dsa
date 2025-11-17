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

vector<vector<int>> addOf2DArr(vector<vector<int>> &a,vector<vector<int>> &b,int row,int col)
{
    
    vector<vector<int>> sum(row,vector<int>(col));

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

return sum;
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
    vector<vector<int>> b(row,vector<int>(col));

    cout<<endl<<endl;
    cout<<"ENTTER THE ELEMENT FOR a matrix :- ";

    cout<<endl<<endl;
    input2DArr(a,row,col);
    cout<<endl<<endl;
    print2DArr(a,row,col);
    cout<<endl<<endl;
    cout<<"ENTTER THE ELEMENT FOR b matrix :- ";
    cout<<endl<<endl;
    input2DArr(b,row,col);
    cout<<endl<<endl;
    print2DArr(b,row,col);
    cout<<endl<<endl;
    vector<vector<int>> sumOfAB=addOf2DArr(a,b,row,col);

    cout<<endl<<endl;
   
    cout<<endl<<endl;
    print2DArr(sumOfAB,row,col);
    cout<<endl<<endl;

    return 0;
}