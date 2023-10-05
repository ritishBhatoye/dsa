#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>& arr,int size){
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        arr.push_back(e);
    }
}
void print(vector<int>& arr,int size){
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
    }
}

void solve(vector<int> arr,vector<int> output,int index,vector<int> &ans){
    //BASE CASE
    if(index>=arr.size()){
        ans.push_back(output);
        return ;
    }

    //EXCLUDE
    solve(arr,output,index+1,ans);

    //INCLUDE
    int element=arr[i];
    output.push_back(element);
    solve(arr,output,index+1,ans);
}

vector<int> subsets(vector<int>& arr){
    vector<vector<int> > ans;
    vector<int> output;
    int index=0;
    solve(arr,output,index,ans);
    return ans;
}

int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    input(arr,size);
    cout<<endl<<endl;
    print(arr,size);
    cout<<endl;
    subsets(arr);
    cout<<endl<<endl;
    return 0;
}