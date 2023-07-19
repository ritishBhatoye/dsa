//BINARY SEARCH IN 2D ARRAY
#include<iostream>
using namespace std;
bool BSearch(int arr[4][4],int target){
    int row=3;
    int col=4;

    int start=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;
    while(start<=end){
        int element=arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        if(element<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}
//
int main(){
    int arr[4][3]={1,3,5,7,10,11,16,20,23,30,34,60};
    cout<<"ENTER THE ELEMENT TO SEARCH "<<endl;
    int target;
    cin>>target;
    if(BSearch(arr,target)){
        cout<<target<<" IS PRESENT "<<endl;
    }
    else{
        cout<<target<<" IS NOT PRESENT "<<endl;
    }
    return 0;
}