#include<iostream>
using namespace std;
void input(int *arr,int size){
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void reverse(int *arr,int size){
    
int i=0;
int j=size-1;
while(i<j){
 swap(arr[i],arr[j]);
 i++;
j--;

}

}

void print(int *arr,int size){
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main() {
    //Write your code here
    int size;
    
    cin>>size;
    int *arr;
    input(arr,size);
    reverse(arr,size);
    print(arr,size);
    return 0;
}