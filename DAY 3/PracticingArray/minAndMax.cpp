#include<iostream>
#include<array>

using namespace std;

int MaxValueInArr(int arr[],int size)
{
   int max=arr[0];

   for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
   return max;
}

int MinValueArr(int arr[],int size){
    int min=arr[0];


    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){

    int arr[5]={4,2,10,3,6};
 int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"MAX VALUE : "<<MaxValueInArr(arr,size)<<endl;
    cout<<"MIN VALUE : "<<MinValueArr(arr,size)<<endl;

    return 0;
}