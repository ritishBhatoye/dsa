#include<iostream>
using namespace std;
void input(int *arr,int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
 int SecondLargestElement(int *arr,int size){
 int ans=-1;
 int i=0;
 int max=INT_MIN;
 while(i<size){
 if(max<arr[i])
{ 
 ans=max;
 max=arr[i];
 
}
 i++;
 }
 return ans;
 }
int main(){
 int size;
 cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
 cin>>size;
 int arr[size];
 input(arr,size);
 cout<<"SECOND LARGEST ELEMENT IN AN ARRAY "<<SecondLargestElement(arr,size)<<endl;
    return 0;
}