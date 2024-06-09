#include<iostream>
using namespace std;
void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int findUniqueElement(int *arr,int size){
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    
    int size;
    int *arr=new int[size];
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    if(findUniqueElement(arr,size)==0){
         cout<<"NO UNIQUE ELEMENT IS PRESNT "<<endl;
    }
    else{
cout<<"THE UNIQUE ELEMENT :- "<<findUniqueElement(arr,size);
    }


    return 0;
}
