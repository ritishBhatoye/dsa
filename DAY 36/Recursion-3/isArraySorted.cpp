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
bool isSorted(int *arr,int size,int i){
    //base CASE
    bool ans;
if(i==(size-1)){
    ans=true;
    return ans;
}
if(arr[i]<arr[i+1]){
   ans=true;
   return ans;
}
//RECURSIVE CALL
return isSorted(arr,size,i+1),ans;

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
    int i=0;
    print(arr,size);
    cout<<endl<<endl;
    if(isSorted(arr,i,size)){
        cout<<"ARRAY IS SORTED "<<endl;
    }
    else{
        cout<<"ARRAY IS NOT SORTED "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}