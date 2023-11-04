#include<iostream>
using namespace std;

int sum(int *arr,int size)
{
if(size==0){
    return 0;
}
if(size==1){
    return arr[0];
}
int ans=arr[0]+sum(arr+1,size-1);
return ans;
}
void input(int *arr,int size){
    for(int i=0;i<size;i++){
         cin>>arr[i];
    }
    cout<<endl;
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<endl<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    print(arr,size);
    cout<<"SUM : "<<sum(arr,size)<<endl;
    cout<<endl<<endl;


    return 0;
}