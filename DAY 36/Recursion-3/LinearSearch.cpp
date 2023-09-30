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
        return false;;
    }
    if(size==1 && x==arr[0]){
     return true;
    }
    else{
        //recursive call
       LinearSearch(arr+1,size-1,x);
        
        return false;


    }
    
}

int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<endl<<endl;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    int x;
    cin>>x;
    if(LinearSearch(arr,size,x)){
        cout<<x<<" IS PRESENT IN AN ARRAY "<<endl;
    }
       else{ cout<<x<<" IS NOT PRESENT IN AN ARRAY "<<endl;
}
    return 0;
}