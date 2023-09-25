//REMOVE ELEMENTS FROM AN ARRAY
#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int duplicate(int *arr,int size){
    int ans=arr[0];
    int i=0;
    int j=i+1;
    while(i<size){
        if(arr[i]==arr[j]){
            ans=arr[i];
        }
        i++;
        j++;
    }
    return ans;
}
void RemoveAnElement(int *arr,int size,int x){
    int i=0;
while(i<size){
    if(arr[i]==x){
        arr[i]=arr[i+1];
        size--;
    }
    i++;
}
print(arr,size);
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    int x=duplicate(arr,size);
    cout<<"ENTER THE ELEMENT TO DELETE "<<endl;
    RemoveAnElement(arr,size,x);

    return 0;
}