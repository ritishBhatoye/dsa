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
    cout<<endl;
}
bool isSort(int *arr,int size){

    if(size==1){
        return true;
    }
    else if(arr[0]>arr[1])
    {
        
        return false;
    }
    else
    {
        isSort(arr+1,size-1);
        return true;
    }    
}
int main(){
    int size;
    cout<<"ENTER THE SIZE "<<endl;
    cin>>size;
    int arr[size];
    cout<<endl<<endl;
    input(arr,size);
    print(arr,size);
    if(isSort(arr,size)){
        cout<<"ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}