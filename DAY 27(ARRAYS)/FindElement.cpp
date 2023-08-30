#include<iostream>
using namespace std;


void input(int *arr,int size){
    cout<<"ENTER ELELMENTS IN AN ARRY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
}
bool isPresent(int *arr,int size,int elemenet){
    for(int i=0;i<size;i++){
        if(arr[i]==elemenet){
            return true;
        }
    }
}

int main(){
    
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr;
    input(arr,size);
    print(arr,size);
    int element;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>element;
    if(isPresent(arr,size,element)){
    cout<<"ELEMENT "<<element<<" IS PRESENT IN THE ARRAY "<<endl;
    }
    else{
        cout<<"ELEMENT "<<element<<"IS NOT PRESENT IN AN ARRAY "<<endl;
    }
    return 0;
}