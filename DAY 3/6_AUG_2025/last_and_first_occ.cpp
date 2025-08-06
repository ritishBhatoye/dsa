

#include<iostream>
#include<vector>
using namespace std;


void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//BRUTE FORCE
pair<int> lastAndFirstOcc(int* arr,int size,int k){
  
int s=0;
int e=size-1;

while(s!=e)
{
 
}
}


int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array ";
    cin>>size;
cout<<endl;
int* arr=new int[size];
inputArr(arr,size);
cout<<endl;
printArr(arr,size);
    cout<<endl<<endl;
cout<<"After moving Zeros to end"<<endl;
movingZerosToEndOPTStriver(arr,size);
    cout<<endl<<endl;


    return 0;
}