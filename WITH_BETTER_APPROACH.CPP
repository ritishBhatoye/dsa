//SECOND LARGEST ELEMENT

#include<iostream>
using namespace std;
void input(int *arr,int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int LargestElement(int *arr,int size){
  int max=arr[0];
  for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
  }
  return max;
}
int SecondLargestElement(int *arr,int size){
 int ans=arr[0];
 int max=LargestElement(arr,size);
 int i=0;
 while(i<size){
 if(arr[i]>ans && arr[i]!=max)
{ 
 ans=arr[i];
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
 cout<<"FIRST LARGEST ELEMENT IN AN ARRAY "<<LargestElement(arr,size)<<endl;
 
 cout<<"SECOND LARGEST ELEMENT IN AN ARRAY "<<SecondLargestElement(arr,size)<<endl;

    return 0;
}