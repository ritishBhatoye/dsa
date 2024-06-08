#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<<endl;
    cout<<"ENNTER THE SIZE OF AN ARRAY ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<"SUM OF THE ARRAY IS "<<sum(arr,size)<<endl;
    return 0;
}