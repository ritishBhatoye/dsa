#include<iostream>
#include<vector>
using namespace std;
void user_input(vector<int> &arr,int size){
    int a;
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr,int size){
    cout<<"ENTERED ELEMENTS ARE : "<<endl;
    for(int i=0;i<size;i++){
       cout<<arr[i]<<endl;
    }
}
void dup(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<"DUPLICATE ELEMENT IS "<<arr[i]<<endl;
            }
        }
    }
}
int main(){
    int s;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>s;
    user_input(arr,s);
    print(arr,s);
    dup(arr,s);
    return 0;
}