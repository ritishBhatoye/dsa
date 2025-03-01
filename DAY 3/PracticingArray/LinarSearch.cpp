#include<iostream>
using namespace std;


bool ls(int arr[],int k,int size){
    for (int i=0;i<size;i++){
        if(arr[i]==k)
        {
            return true;
        }
    }
    return false;
}


int main(){

    int arr[6]={12,4,5,50,1,3};

    int size=sizeof(arr)/sizeof(arr[0]);
    
    int val;
    cout<<"ENTER THE VALUE TO SEARCH IN AN ARRAY :- ";
    cin>>val;



    if(ls(arr,val,size)==true){
   cout<<val<<" IS PRESENT IN AN ARRAY "<<endl;

    }
    else{
   cout<<val<<" IS NOT PRESENT IN AN ARRAY "<<endl;

    }
    return 0;
}