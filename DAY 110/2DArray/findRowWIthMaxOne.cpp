#include <iostream>
#include <vector>
using namespace std;

void inputArr(vector<vector<int>> &arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element at row " << i << " and col " << j << ": ";
            cin >> arr[i][j];
        }
    }
}

void printArr(const vector<vector<int>> &arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int maxOne(vector<vector<int>> &arr,int row,int col)
{
    int maxRowOne=0;
    int index=-1;
    for(int i=0;i<row;i++)
    {
        int cntOne=0;
        for(int j=0;j<col;j++)
        {
            cntOne+=arr[i][j];
            if(cntOne > maxRowOne)
            {
                maxRowOne=cntOne;
                index=i;
            }
        }
    }
    return index;
}

int main()
{
    // int row, col;
    // cout << "Enter the number of rows: ";
    // cin >> row;
    // cout << "Enter the number of columns: ";
    // cin >> col;


    // vector<vector<int>> arr(row, vector<int>(col));
    vector<vector<int>> arr = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    cout << endl;
    // inputArr(arr, 3, 3);

    cout << "\nMatrix:\n";
    printArr(arr, 3, 3);
    cout<<endl<<endl;
   int ans= maxOne(arr,3,3);
    cout<<endl<<endl;
    cout<<"Maximum number of row ones :- "<<ans<<endl;
    cout<<endl<<endl;


    return 0;
}
