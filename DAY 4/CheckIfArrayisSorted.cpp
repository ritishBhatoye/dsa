#include<iostream>
using namespace std;
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
bool check(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        if(arr[i]<=arr[i+1]){
            return true;
        }
        
    }
    return false;
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED VALUES IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"CHECKING IF ARRAY  IS SORTED OR NOT : "<<check(arr,size)<<endl;
    
    return 0;
}