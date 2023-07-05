#include<iostream>
using namespace std;
int secondLargest(vector<int> &arr,int size){
    int largest=arr[0];
    int second=-1;
    for(int i=1;i<size;i++){
        if(largest<arr[i]){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}
void user_input(vector<int> &arr,int size){
    int a;
    for(int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr,int size){
    cout<<"ENTERED ELEMENTS ARE "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    print(arr,size);
    cout<<"THE SECOND LARGEST ELEMENT IN AN ARRAY : "<<secondLargest(arr,size);
    return 0;
}