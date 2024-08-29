#include<iostream>
using namespace std;

void inputArr(int* arr,int size){
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

bool linearSearch(int* arr,int k,int size)
{
    for(int i=0;i<size;i++){
        if(arr[i]==k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;
    int* arr=new int[size];
    inputArr(arr,size);
    int k;
    cout<<"ENTER THE KEY TO SEARCH IN THE ARRAY :- ";
    cin>>k;
    if(linearSearch(arr,k,size)){
        cout<<k<<" IS PRESENT IN THE ARRAY"<<endl;
    }
    else{
        cout<<k<<" IS NOT PRESENT IN THE ARRAY"<<endl;
    }

    return 0;
}