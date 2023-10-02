#include<iostream>
using namespace std;

void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

bool LinearSearch(int *arr,int size,int x){
    bool ans;
    //base case
if(size==0){
    return false;
}
if(arr[0]==x){
    return true;
}
else{
    ans=LinearSearch(arr+1,size-1,x);1
    return ans;
}

}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<endl;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH "<<endl;
    int x;
    cin>>x;
    cout<<endl<<endl;
    if(LinearSearch(arr,size,x)){
        cout<<x<<" IS PRESENT IN AN ARRAY "<<endl;
    }
    else{
        cout<<x<<" IS NOT PRESENT IN AN ARRAY "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}