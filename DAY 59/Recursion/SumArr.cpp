#include<iostream>
using namespace std;

int sum(int *arr,int size)
{
    if(size==1){
        return arr[0];
    }
    int ans;
    ans=arr[0]+sum(arr+1,size-1);
    return ans;
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
    cout<<"SUM : "<<sum(arr,size)<<endl;
    cout<<endl<<endl;
    return 0;
}