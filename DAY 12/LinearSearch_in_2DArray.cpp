//applying Linear Search in 2D arrays
#include<iostream>
using namespace std;
bool isPresent(int arr[3][3],int target,int row,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(target==arr[row][col]){
                return true;
            }
            
        }
    }
    return false;
}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    int row=3;
    int col=3;
    cout<<"ENTER THE ELEMENT TO SEARCH IN 2D ARRAY "<<endl;
    cin>>target;
    if(isPresent(arr,target,3,3)){
        cout<<target<<" ELEMENT IS PRESENT "<<endl;
    }
    else{
        cout<<target<<" ELEMENTS IS NOT PRESENT "<<endl;
    }
    return 0;
}