#include<iostream>
using namespace std;
void input(int *arr,int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
bool checkIfSorted(int *arr,int size){
    int i=0;
    int j=i+1;
    bool ans;
    while(i<size){
      if(arr[i]<=arr[j]){
        return true;
      }
     i++;
     j--;
    }

    return false;
}
int main(){

    int size;
    cin>>size;
    int arr[size];
    input(arr,size);
    if(checkIfSorted(arr,size)){
        cout<<"YES ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"NO ARRAY IS NOT SORTED "<<endl;
    }
    return 0;
}