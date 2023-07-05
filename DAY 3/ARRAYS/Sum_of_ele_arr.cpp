#include<iostream>
using namespace std;
int sum(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int a[50];
    cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"ENTERRED ELEMENTS ARE : "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"SUM OF ALL ELEMENTS IN AN ARRAY IS : "<<sum(a,size)<<endl;
    return 0;
}
