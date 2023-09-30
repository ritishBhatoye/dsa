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

bool isSortedArray(int *arr,int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSortedArray(arr+1,size-1);
        return ans;
    }
}
int main(){

    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    cout<<endl<<endl;
   
    input(arr,size);
    cout<<endl<<endl;
    cout<<"ENTERRED ELEMENT IN AN ARRAY : "<<endl;
    cout<<endl;
    print(arr,size);
    cout<<endl<<endl;
    if(isSortedArray(arr,size)){
        cout<<"ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}