//ROTATE AN ARRAYS ELEMENTS BY ONE TOWARD LEFT
#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
    cout<<"ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : "<<endl;
    int a;
    for(int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
void rotateByOne(vector<int> &arr,int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
    arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    print(arr,size);
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>size; 
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(arr,size);
     cout<<"ROTATING THE ARRAY ELEMENT LEFT BY ONE : "<<endl;
    rotateByOne(arr,size);
    return 0;
} 