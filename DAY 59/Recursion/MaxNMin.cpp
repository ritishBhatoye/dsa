#include<iostream>
using namespace std;

int maxx(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int minn(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int Max(int *arr,int size){
    if(size==1){
        return arr[0];
    }
    return maxx(arr[size-1],Max(arr,size-1));
}
int Min(int *arr,int size){
    if(size==1){
        return arr[0];
    }
    return minn(arr[size-1],Min(arr,size-1));
}
void inputArr(int *arr,int size){
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<endl<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"ENTER ELEMENT : "<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    cout<<"ENTERRED ELEMENTS : "<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"MAXIMUM ELEMENT : "<<Max(arr,size)<<endl;
    cout<<"MINIMUM ELEMENT : "<<Min(arr,size)<<endl;
    cout<<endl<<endl;
    return 0;
}