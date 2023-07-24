//QUICKSORT USING RECURSION
#include<iostream>
using namespace std;
void user_input(int arr[],int size){
    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int size){
 //   cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int Partition(int arr[],int s,int e){
int pivot=arr[s];
int count=0;
for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivot){count++;}
}    
//PLACING AT RIGHT PLACE 
int pI=s+count;
swap(arr[s],arr[pI]);

int i=s,j=e;
 while(i<pI && j>pI){
  while(arr[i]<=pivot){
   i++;
  }    
  while(arr[j]>pivot){
    j--;
  }
 if(i<pI && j>pI){
    swap(arr[i++],arr[j--]);
 }
}
return pI;
}
void QuickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=Partition(arr,s,e);
    //left
    QuickSort(arr,s,p-1);
    //right
    QuickSort(arr,p+1,e);
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[10];
    int s=0;
    int e=size-1;
    user_input(arr,size);
     cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"AFTER APPLYING QUICK SORT "<<endl;
    QuickSort(arr,s,e);
    print(arr,size);
    return 0;
}