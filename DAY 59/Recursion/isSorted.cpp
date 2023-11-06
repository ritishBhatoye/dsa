#include<iostream>
using namespace std;

bool isSort(int *arr,int size){
    if(size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSort(arr+1,size-1);
    }
}
void inputArr(int *arr,int size){
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"ENTER ELEMENT IN AN ARRAY "<<endl;
    inputArr(arr,size);
    cout<<"ENTERED ELEMENT IN AN ARRAY "<<endl;
    printArr(arr,size);
    // int x;
    // cout<<"ENTER THE NUMBER YOU WANT TO SEARCH "<<endl;
    // cin>>x;
    if(isSort(arr,size)){
        cout<<"ARRAY IS SORTED !!!"<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED !!!"<<endl;
    }
    cout<<endl<<endl;
    return 0;
}