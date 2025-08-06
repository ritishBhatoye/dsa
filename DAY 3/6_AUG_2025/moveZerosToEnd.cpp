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
void moveZerosToEnd(int* arr,int size){
  vector<int> temp;

    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    for(int i=temp.size();i<size;i++){
        arr[i]=0;
    }

    printArr(arr,size);
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
moveZerosToEnd(arr,size);
    cout<<endl<<endl;


    return 0;
}