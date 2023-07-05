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
    
    for(int i=0;i<size;i++){
       cout<<arr[i]<<endl;
    }
}
void dup(vector<int> &arr,int size){
    vector<int> ans;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
               ans.push_back(arr[i]);
            }
        }
    }
    cout<<"DUPLICATE ELEMENTS IN AN ARRAY "<<endl;
    size=ans.size();
    print(ans,size);
}
int main(){
    int s;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>s;
    user_input(arr,s);
    cout<<"ENTERED ELEMENTS ARE : "<<endl;
    print(arr,s);
    dup(arr,s);
    return 0;
}