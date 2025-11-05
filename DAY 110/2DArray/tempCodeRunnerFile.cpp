vector<int> linearSearch(vector<vector<int>> &arr,int col ,int row,int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}