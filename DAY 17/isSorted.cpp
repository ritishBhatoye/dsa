//CHECK WEATHER THE ARRAY IS SORTED OR NOT
#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
    cout<<"ENTERRED ELEMENTS ARE :- "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool isSorted(int arr[],int size){
    if(size==1 || size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[10];
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    print(arr,size);
    if(isSorted(arr,size)){
        cout<<"ARRAY IS SORTED !!!!!"<<endl;
    }
    else{
        cout<<"ELSE ARRAY IS NOT SORTED !"<<endl;
    }

    return 0;
}