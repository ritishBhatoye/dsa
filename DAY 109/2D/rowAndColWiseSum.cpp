#include <iostream>
#include <vector>
using namespace std;

void inputArr(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element at row " << i << ", col " << j << ": ";
            cin >> arr[i][j];
        }
    }
}

void printArr(int **arr, int row, int col)
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

vector<int> findRowSum(int **arr,int row,int col)
{
    vector<int> ans;
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        ans.push_back(sum);
        sum=0;
    }
    return ans;
}

int main()
{
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of cols: ";
    cin >> col;

    // ✅ Dynamic allocation
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    inputArr(arr, row, col);

    cout << "\nArray:\n";
    
    
    printArr(arr, row, col);


    vector<int> ans=findRowSum(arr,row,col);
    cout<<"Sum Row Wise :- "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    // 🧹 Free memory
    // for (int i = 0; i < row; i++)
    // {
    //     delete[] arr[i];
    // }
    // delete[] arr;

    return 0;
}
