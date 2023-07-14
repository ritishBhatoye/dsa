#include<iostream>
using namespace std;
void WavePrint(int arr[2][2],int r,int c){
    for(int c=0;c<2;c++){
        if(c&1){
            for(int r=2-1;r>=0;r--){
                cout<<arr[r][c]<<" ";
            }
          //  cout<<endl; 
        }
        else{
            for(int r=0;r<2;r++){
                cout<<arr[r][c]<<" ";
            }
           // cout<<endl;
        }
    }
}

int main(){
int arr[2][2];
// int r=3,c=0;
//int arr[3][3];
for(int i=0;i<2;i++){
   for(int j=0;j<2;j++){
    cin>>arr[i][j];
    }
}
cout<<"ENTERRED ELEMENTS IN 2D ARRAY :- "<<endl;
for(int r=0;r<2;r++){
for(int c=0;c<2;c++){
    cout<<arr[r][c]<<" ";
 }
    cout<<endl;
}
cout<<"WAVE PRINT WILL BE :- "<<endl;
WavePrint(arr,2,2);
    return 0;
}