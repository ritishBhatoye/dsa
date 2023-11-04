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
void reverseArr(int *arr,int i,int j){

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void rotateByD(int* arr,int size,int d)
{
///reverse D part
reverseArr(arr,0,d-1);
//reverse N-D part
reverseArr(arr,d,size-1);
//reverse complete array 
reverseArr(arr,0,size-1);
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
    // rotateByOne(arr,size);
   
    print(arr,size);
    int d;
    cout<<"ROTATE BY HOW MANY PLACES : "<<endl;
    cin>>d;
    rotateByD(arr,size,d);
    print(arr,size);
    cout<<endl<<endl;
    
    return 0;
}