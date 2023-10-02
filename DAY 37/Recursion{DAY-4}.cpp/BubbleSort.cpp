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


void BubbleSort(int *arr,int size){
    //BASE CASE
    if(size==0 || size==1 ){
        return ;
    }
    
    
   
   //1 CASE SOLVE HOGYA
for(int i=0;i<size-1;i++){
    if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
    }
}

 //recursive call
 BubbleSort(arr,size-1);
}    

// void Sort(int *arr,int s,int e){
//     if(s>e){
//         return ;
//     }
//     if(arr[s]>arr[e]){
//         swap(arr[s],arr[e]);
//         Sort(arr,s+1,e-1); 

//     }
    
//     //recursive call
//         Sort(arr,s+1,e-1); 
    

// }
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int *arr=new int[size];
    cout<<endl<<endl;
    input(arr,size);
    cout<<endl;
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<endl;
    BubbleSort(arr,size);
    cout<<endl<<endl;
    print(arr,size);
    cout<<endl<<endl;
    return 0;
}