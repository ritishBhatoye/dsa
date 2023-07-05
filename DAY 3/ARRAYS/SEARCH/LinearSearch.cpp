#include<iostream>
using namespace std;
void ls(int a[],int size,int e){
for(int i=0;i<size;i++){
 if(e==a[i]){
    cout<<"ELEMENT "<<e<<" IS PRESENT AT THE "<<i<<" POSITION "<<endl;
    break;
 }
 else{
    cout<<"ELEMENT "<<e<<" IS NOT PRESENT "<<endl;
    break;
 }
}
}
int main(){
    int a[10];
    int size;
    cout<<"ENTER SIZE OF AN ARRAY "<<endl;
    cin>>size;
    cout<<"ENTER THE ELEMENTS YOU WANT TO INSERT : "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    int e;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH : "<<endl;
    cin>>e;
    ls(a,size,e);
    return 0;
}