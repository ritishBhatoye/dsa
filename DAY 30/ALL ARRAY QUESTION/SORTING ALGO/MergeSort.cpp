//ALGO WILL BE CARRIED OUT IN THREE STEPS:-
//STEP 1 :- DIVIDE THE ARRAY BY FINDING MID  
//STEP 2 :- SORT THE DIVIDED ARRAY 
//STEP 3 :- MERGE THE SORTED ARRAYS 
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

void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];

    //copy values
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    int k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    //MERGE 2 SORTED ARRAY 
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else {
            arr[mainArrayIndex++]=second[index2++];

        }
    }
    while(index1 <len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index1<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
}

void MergeSort(int *arr,int s,int e){
 //BASE CASE
    if(s>=e){
        return;
  
    }
   int mid=s+(e-s)/2;
          //LEFT PART SORT KARNA
          MergeSort(arr,s,mid);
          //RIGHT PART SORT KARNA
          MergeSort(arr,mid+1,e);
          //MERGE 
          merge(arr,s,e);

        
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    input(arr,size);
    MergeSort(arr,0,size-1);
    print(arr,size);
    cout<<endl;
    return 0;
}
