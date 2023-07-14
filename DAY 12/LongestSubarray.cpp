#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT "<<endl;
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
void LongestSum(vector<int> &arr,int size){
    int len=0;
    for(int i=0;i<size;i++){
      
        for(int j=0;j<size;j++){
              int s=0;
              for(int k=i;k<j;k++){
                if(s==k){
                    len=max(len,j-i+1);
                }
              }
        }
    }
    cout<<"THE LONGEST SUBARRAY SUM IS "<<len<<endl;
}
int main(){
    vector<int> arr;
int size;
cout<<"ENTER THE SIZE OF AN ARRAY :- ";
cin>>size;
user_input(arr,size);
cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
print(arr,size);
LongestSum(arr,size);
    return 0;
}