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
int getSum(int *arr,int size){
    //base class
    int ans=0;
    if(size==0 ){
        return 0;
    }
    if(size==1){
        return arr[0];
    }


    //recursive call
    return  arr[0]+getSum(arr+1,size-1);

}

int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    cout<<endl<<endl;
    cout<<"ENTER THE ELEMENTS "<<endl;
    int *arr=new int[size];
    input(arr,size);
    cout<<endl;
    cout<<"ENTERED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"SUM : "<<getSum(arr,size)<<endl;
    cout<<endl<<endl;
    return 0;
}