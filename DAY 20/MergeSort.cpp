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
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];
    
    int k=s;
    for(int i=0;i<len1;i++)
{
   first[i]=arr[k++];
}
 k=mid+1;
for(int i=0;i<len2;i++)
{
   second[i]=arr[k++];
}
int i1=0,i2=0;
 k=s;
while(i1<len1 && i2<len2){
    if(first[i1]<second[i2]){
        arr[k++]=first[i1++];
    }
    else{
        arr[k++]=second[i2++];
    }
}
while(i1<len1){
    arr[k++]=first[i1++];
}
while(i2<len2){
    arr[k++]=second[i2++];
}
}
void MergeSort(int arr[],int s,int e){
    int mid=(s+e)/2;
    if(s>=e){
        return;
    }
    //left
    MergeSort(arr,s,mid);
    //right
    MergeSort(arr,mid+1,e);
    ///MERGING TWO ARRAYS
    merge(arr,s,e);
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARARY "<<endl;
    cin>>size;
    int arr[10];
    user_input(arr,size);
        cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);    
    MergeSort(arr,0,size-1);
    cout<<"APPLYING MERGE SORT :- "<<endl;
    print(arr,size);
    return 0;
}