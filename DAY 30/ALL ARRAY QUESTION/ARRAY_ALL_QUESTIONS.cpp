//largest element in an ARRAY
#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void smallestElement(int *arr,int size){
    int i=0;
    int min=INT_MAX;
    while(i<size){
   if(arr[i]<min){
    min=arr[i];
   }
   i++;
    }
    cout<<"SMALLEST ELEMENT IN AN ARRAY "<<min<<endl;
}
void largestElement(int *arr,int size){
    int i=0;
   int m=INT_MIN;

while(i<size){
    if(arr[i]>m){
        m=arr[i];
    }
    i++;
   }
   
   cout<<"MAXIMUM ELEMENT "<<m<<endl;

}
int main(){
 int size;
 cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
 cin>>size;
 int arr[size];
 input(arr,size);
 largestElement(arr,size);
 smallestElement(arr,size);
    return 0;
}