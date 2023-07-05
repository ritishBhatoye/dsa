#include<iostream>
using namespace std;
void rev(int a[],int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start<=end){
      temp=a[start];
      a[start]=a[end];
      a[end]=temp;
      start++;
      end--;
    }
}
int main(){
    int size;
    int a[20];
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    cout<<"ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"REVERSED ARRAY "<<endl;
   rev(a,size);
   for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
   }

    return 0;
}