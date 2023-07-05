#include<iostream>
using namespace std;
void swap_al(int a[],int size){
    int temp;
    for(int i=0;i<size;i=i+2){
         if(i+1<size){ 
            temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
        //swap(a[i],a[i+1]);
          }
    }
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int a[20];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    swap_al(a,size);
    cout<<"SWAP ALTERNATE"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;

}