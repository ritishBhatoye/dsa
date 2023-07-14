#include<iostream>
#include<vector>
using namespace std;
int SprilPrint(vector<int>& matrix){
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int count=0;
    int total=row*col;
  
    //INDEX INITIALIZATION
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    while(count<total){
        //PRINT STARTING ROW
     for(int index=startingCol;count<total && index<=endingCol;index++){
        ans.push_back(matrix[startingRow][index]);
        count++;
     }
     startingRow++;
    //PRINT ENDING COLOUMN
    for(int index=startingRow;count<total && index<=endingRow;index++){
        ans.push_back(matrix[index][endingCol]);
        count++;
    }
    //PRINT ENDING ROW
    endingCol--;
    for(int index=endingCol;count<total && index>=startingCol;index--){
    ans.push_back(matrix[endingRow][index]);
        count++;
    }
    endingRow--;
    //PRINT STARTING COLOUMN
    for(int index=endingRow;count<total && index>=startingRow;index--){
        ans.push_back(matrix[index][startingCol]);
        count++;
    }
    startingCol++;
}
return ans;
}
int main(){
vector<int> arr;
int a;
for(int i=1;i<=9;i++){
    cin>>a;
    arr.push_back(a);
}
// int r=3,c=0;
//int arr[3][3];
// for(int i=0;i<3;i++){
//    for(int j=0;j<3;j++){
//     cin>>arr[i][j];
//     }
// }
// cout<<"ENTERRED ELEMENTS IN 2D ARRAY :- "<<endl;
// for(int r=0;r<3;r++){
// for(int c=0;c<3;c++){
//     cout<<arr[r][c]<<" ";
//  }
//     cout<<endl;
// }

    return 0;
}