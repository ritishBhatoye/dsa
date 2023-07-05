
#include<iostream>
using namespace std;
void max(vector<int> &arr,int size){
    int largest=0;
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"LARGEST NUMBER IN AN ARRAY "<<largest<<endl;
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
    max(arr,size);
    return 0;
}