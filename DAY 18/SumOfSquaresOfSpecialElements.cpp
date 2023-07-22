//SUM OF SQUARES OF SPECIAL ELEMENTS
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
long long SumSq(int arr[],int n){
//int n=sizeof(arr)/sizeof(arr[0]);
long long ans=0;

for(int i=1;i<n;++i){
    if(n%i==0){
        ans+=(arr[i]*arr[i]);
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
cout<<"SUM OF SPECIAL ELEMENTS IN AN ARRAY "<<SumSq(arr,size)<<endl;
return 0;
}