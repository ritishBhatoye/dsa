#include<iostream>
using namespace std;
void input(int *arr,int size){
    cout<<"ENTER THE ELEMENT YOUN WANT TO INSERT "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}
void sort(int *arr,int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
i++;
j--;
}
}
int main(){
    int *arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    arr=new int[size];
    input(arr,size);
    sort(arr,size);
    print(arr,size);
    return 0;
}