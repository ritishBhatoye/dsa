//APPLY LINEAR SEARCH USING RECURSION
#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool LinearSearch(int arr[],int size,int target){
     bool ans;
    if(size==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        int m=LinearSearch(arr+1,size-1,target);
      if(m==arr[0]) 
      { ans=true;}
        
    }
    return ans;
}
int main(){
    int arr[10];
    int n;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>n;
    user_input(arr,n);
    print(arr,n);
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    int target;
    cin>>target;
    if(LinearSearch(arr,n,target)){
        cout<<target<<" IS PRESENT IN THE ARRAY "<<endl;
    }
    else{
        cout<<target<<" IS NOT PRESENT IN THE ARRAY "<<endl;
    }
    return 0;
}