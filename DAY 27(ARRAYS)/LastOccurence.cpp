#include<iostream>
using namespace std;

void input(int *arr,int size){
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int Min(int *arr,int size){
    int ans=INT_MAX;
for(int i=0;i<size;i++){
    if(arr[i]<ans){
       ans=arr[i];
    }
  }
  return ans;
}
int Max(int *arr,int size){
    int ans=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
}
int main(){
    int *arr;
    int size;
    cout<<"ENTERT THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    input(arr,size);
    print(arr,size);
    cout<<"MINIMUM ELEMENT IN THE ARRAY IS "<<Min(arr,size)<<endl;
    cout<<"MAXMIMUM ELEMENT IN THE ARRAY IS "<<Max(arr,size)<<endl;

    return 0;
}