#include<iostream>
using namespace std;
// void user_input(int arr[3][3],int r,int c){

// }
// void print(int arr[3][3],int r,int c){

// }

void printRowWiseSum(int arr[3][3],int i,int j){
    cout<<"PRINTING ROW-WISE SUM OF 2D ARRAY :- "<<endl;
    
for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=arr[i][j];
    }
    cout<<"SUM OF "<<i<<" ROW IS "<<sum<<" "<<endl;
  }
}
void printColWiseSum(int arr[3][3],int i,int j){
    cout<<"PRINTING COL-WISE SUM OF 2D ARRAY :- "<<endl;
    
for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=arr[j][i];
    }
    cout<<"SUM OF "<<j<<" COLOUMN IS "<<sum<<" "<<endl;
  }
}
int main(){

    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ENTERRED ELEMENTS IN 2D ARRAY :- "<<endl;
    for(int r=0;r<3;r++){
    for(int c=0;c<3;c++){
        cout<<arr[r][c]<<" ";
    }
    cout<<endl;
}
int rol=3,col=3;
printColWiseSum(arr,3,3);

    return 0;
}