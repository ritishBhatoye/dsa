#include<iostream>
using namespace std;

bool Ls(int *arr,int size,int x)
{
     if(size==0)
     {
        return false;
     }
     if(arr[0]==x){
        return true;
     }
     else{
        return Ls(arr+1,size-1,x);
     }
}

bool LinearSeach(int *arr,int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
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
int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"ENTER ELEMENT IN AN ARRAY "<<endl;
    inputArr(arr,size);
    cout<<"ENTERED ELEMENT IN AN ARRAY "<<endl;
    printArr(arr,size);
    int x;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH "<<endl;
    cin>>x;
    if(LinearSeach(arr,size,x)){
        cout<<"ELEMENT "<<x<<" IS PRESENT "<<endl;
    }
    else{
        cout<<"ELEMENT "<<x<<" IS NOT PRESENT "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}