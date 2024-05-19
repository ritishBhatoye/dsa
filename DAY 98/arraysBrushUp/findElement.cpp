#include<iostream>
using namespace std;

void inputArr(int *arr,int size){
    cout<<"ENTER THE NUMBER OF ELEMENT IN AN ARRAY : "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArray(int *arr,int size){
    cout<<"ELEMENTS ENTERED BY USER :- "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

bool isPresent(int *arr,int size,int num){
    for(int i=0;i<size;i++){
        if(num==arr[i]){
            return true;
        }
    }
    return false;
}

int main()
{   
    cout<<endl<<endl;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>size;

    int *arr=new int[size];

    inputArr(arr,size);
    // cout<<endl;
    printArray(arr,size);
    int num;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH : "<<endl;
    cin>>num;
    if(isPresent(arr,size,num))
    {
        cout<<num<<" IS PRESENT IN THE ARRAY";
    }
    else{
        cout<<num<<"IS NOT PRESENT IN THE ARRAY";
    }

    cout<<endl<<endl;
  delete[] arr;
    return 0;
}