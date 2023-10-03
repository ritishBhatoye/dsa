#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
//CHECK IF SORTED
bool CheckIfSorted(int *arr,int size){
    bool ans;
    //base case
    if(size==0||size==1){
     return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    //RECURSIVE CALL
    else{
        ans=CheckIfSorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr;
    arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<endl;
    print(arr,size);
    cout<<endl;
    if(CheckIfSorted(arr,size)){
     cout<<"ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}