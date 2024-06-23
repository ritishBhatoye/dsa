#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool LS(int *arr,int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}


int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<"ENER THE ELEMENTS :- "<<endl;
    inputArr(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS :- "<<endl;
    printArr(arr,size);
    cout<<endl;
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    
    cin>>x;
    if(LS(arr,size,x)){
        cout<<"ELEMENT "<<x<<" IS PRESENT "<<endl;
    }
    else{
        cout<<"ELEMENT "<<x<<" IS NOT PRESENT "<<endl;
    }

    cout<<endl;
    return 0;
}