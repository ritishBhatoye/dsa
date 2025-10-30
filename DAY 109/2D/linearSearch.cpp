#include<iostream>
using namespace std;

void inputArr(int **arr,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the element in row "<<i<<" , col "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
}


void printArr(int **arr,int row,int col)
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

pair<int,int> linearSearch(int **arr,int row,int col,int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                return {i ,j };
            }
        }
        cout<<endl;
    }
    return {0,0};
}


int main()
{
    int row;
    cout <<"Enter the row :- ";
    cin>>row;
    int col;
    cout<<"Enter the col :- ";
    cin>>col;
    
    int **arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    cout<<"Enter the elements in the arr :- "<<endl;

    inputArr(arr,row,col);
    cout<<"Array :- "<<endl;
    printArr(arr,row,col);
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    pair<int,int> ans=linearSearch(arr,row,col,k);
    cout<<"Row for Search Element :- "<<ans.first<<endl;
    cout<<"Col for Search Element :- "<<ans.second<<endl;


    cout<<endl<<endl;
    cout<<endl<<endl;
    
    return 0;
}