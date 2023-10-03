#include<iostream>
using namespace std;

bool checkIfElementInAnArray(int *arr,int size,int x){
    //base case
    if(arr[0]==x || arr[1]==x){
        return true;
    }
     if(arr[0]!=x || arr[1]!=x){
        return false;
    }
    else{
    //recursive call
    return checkIfElementInAnArray(arr+1,size-1,x);
    }
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
}
int main(){
int *arr;
int size;
cout<<endl<<endl;
cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
cin>>size;
arr=new int[size];
cout<<endl<<endl;
input(arr,size);
cout<<endl;
print(arr,size);
int x;
cout<<endl;
cout<<"ENTER THE ELEMENT YOU WANT TO INSERT "<<endl;
cin>>x;

cout<<endl<<endl;
if(checkIfElementInAnArray(arr,size,x)){
    cout<<x<<" IS PRESENT IN AN ARRAY  "<<endl;
}
else{
    cout<<x<<" IS NOT PRESENT IN AN ARRAY  "<<endl;
}
    return 0;
}