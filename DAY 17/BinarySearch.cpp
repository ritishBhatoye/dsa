//BINARY SEARCH USING RECURSION 
#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
    cout<<"ENTERRED ELEMENTS ARE :- "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool BinarySearch(int arr[],int s,int e,int key){
  
    bool ans;
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
   
    if(arr[mid]<key){
     return BinarySearch(arr,mid+1,e,key);
    }
    else{
       return BinarySearch(arr,s,mid-1,key);
    }
    
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
    cin>>size;
    int arr[10];
    int key ;
    user_input(arr,size);
    print(arr,size);
    int s=0;
    int e=size-1;
    cout<<"ENTER THE TARGET ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>key;
    if(BinarySearch(arr,s,e,key)){
        cout<<key<<" ELEMENT IS PRESENT IN AN ARRAY "<<endl;
    }
    else{
        cout<<key<<" ELEMENT IS PRESENT IN AN ARRAY "<<endl;
    }
    return 0;
}