//printing 2D _ARRAYS
#include<iostream>
using namespace std;
void user_input(int arr[row][col]){
cout<<"ENTER THE ELEMENTS IN 2D ARRAY YOU WANT TO INSERT "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
}
void print(int arr[3][3]){
    cout<<"ENTERRED ELEMENTS IN AN 2D ARRAYS :- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<endl;
        }
    }
}
int main(){
int row,col;
int arr[row][col];
int size;
cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
cout<<"ENTER THE NUMBERS OF ROWS "<<endl;
cin>>row;
cout<<"ENTER THE NUMBERS OF COLOUMNS "<<endl;
cin>>col;
user_input(arr);
print(arr);
}