#include<iostream>
using namespace std;
void print_arr(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int B(int r){
    long long res=1;
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<r;i++){
        res=res*(r-i);
        res=res/(i);
        // ans.push_back(res);
    }
    // int size=ans.size();
    // print_arr(ans,size);
    return res;
}
void PascelTraingle(int n){
    
    vector<int> ans;
for(int i=1;i<=n;i++){
    //ans.push_back(B(i));
    cout<<B(i)<<endl;
}
// int size=ans.size();
// print_arr(ans,size);
}
int main(){
    int n;
    cout<<"ENTER THE ROWS TO BE PRINTED "<<endl;
    cin>>n;
    cout<<"PASCEL TRIANGLE :- "<<endl;
    PascelTraingle(n);
    return 0;
}