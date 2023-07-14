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
bool TwoSum(vector<int> arr,int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(sum==(arr[i]+arr[j])){
                return true;
            }
        }
    }
    return false;
}
void TwoSumIndex(vector<int> arr,int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(sum==(arr[i]+arr[j])){
               cout<<"INDEX OF TWO ELEMENT IS :- "<<i<<" "<<j<<endl;
            }
        }
    }
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    vector<int> arr;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"ENTER THE SUM OF TWO ELEMENTS TO BE EXPECTED "<<endl;
    int sum;
    cin>>sum;
    if(TwoSum(arr,size,sum)){
        cout<<"SUM OF ELEMENTS EXIST "<<endl;
    }
    else{
        cout<<" SUM OF ELEMENTS DO NOT EXIST "<<endl;
    }
    TwoSumIndex(arr,size,sum);
    return 0;
}