#include<iostream>
using namespace std;
bool ls(int a[],int size,int e){
    for(int i=0;i<size;i++){
        if(e==a[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<" ENTER THE SIZE "<<endl;
    cin>>n;
    int a[20];
    cout<<" ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<" ELEMENTS ENTERRED IN AN ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int e;
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT "<<endl;
    cin>>e;
    cout<<ls(a,n,e)<<endl;
    return 0;
}