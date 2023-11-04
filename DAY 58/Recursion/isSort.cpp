#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    bool ans;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[j+1]){
                ans=true;
            }
            else{
                ans=false;
            }
        }
    }
    return ans;
}
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
  
       if(size==1|| size==0)
       {
        return true;
       }
       if(arr[0]>arr[1])
       {
      return false;
       }
    else{
     
    return isSort(arr+1,size-1);
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