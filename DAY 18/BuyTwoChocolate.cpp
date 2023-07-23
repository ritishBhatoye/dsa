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
int buyChoc(int arr[],int size,int money){
    int ans=0;
    for(int i=0;i<size;i++){
        if(money>0){
            money=money-arr[i];
            ans=money;
        }
        else{
           ans=money;
        }
    }
    return ans;
}
int main(){
    int size;
    int arr[10];
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    print(arr,size);
    cout<<"BUY CHOCOLATE  "<<buyChoc(arr,size,3)<<endl;
    return 0;
}