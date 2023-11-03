#include<iostream>
using namespace std;

void input(int *arr,int size)
{
    for(int i=0;i<size;i++){
      cin>>arr[i];
    }
}

void print(int *arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

}
void sortArr(int *arr,int size)
{
 for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
 }   
}
void rotateByOne(int *arr,int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
}
int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE : "<<endl;
    cin>>size;
    int *arr;
    arr=new int[size];
    input(arr,size);
    sortArr(arr,size);
    rotateByOne(arr,size);

    print(arr,size);
    cout<<endl<<endl;
    
    return 0;
}