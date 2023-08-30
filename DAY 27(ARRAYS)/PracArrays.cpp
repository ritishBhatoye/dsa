#include<iostream>
using namespace std;

void input(int *arr,int size){
cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;    
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void print(int *arr,int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}


int main(){
int size;
cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
cin>>size;
int arr[size];
input(arr,size);
print(arr,size);
    return 0;
}