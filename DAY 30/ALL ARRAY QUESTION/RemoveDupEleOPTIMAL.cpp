//remove an element OPTIMAL
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
int RemoveDupEle(int *arr,int size){
    int i=0;
    int j=i+1;
    int count=0;
    while(i<size){
        if(arr[i]==arr[j]){
            j++;
            count++;
        }
        else{
            arr[i+1]=arr[j];
            j++;
            i++;
            
        }
    }
  return count+1;
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    int nSize=RemoveDupEle(arr,size);
    cout<<nSize<<endl;
    print(arr,nSize);

    return 0;
}

// int i=0;
//i REPRESENTING THE NUMBER OF UNIQUE ELEMENTS
// for(int j=0;j<size;j++){
//     if(arr[i]!=arr[j]){
//         arr[i+1]=arr[j];
//         i++;
//     }
// }
// return i+1;