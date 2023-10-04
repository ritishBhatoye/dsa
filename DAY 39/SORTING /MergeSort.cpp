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

void mergeTwoSortedArr(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=(mid-s)+1;
    int len2=(e-mid);

    //arrays
    int *first=new int[len1];
    int *secondary=new int[len2];
    
    //k is MAIN ARRAY INDEX

    int k=s;
    //copying value;
    for(int i=0;i<len1;i++){
      first[i]=arr[k++];
    }
    k=mid+1;    
    for(int i=0;i<len2;i++){
        secondary[i]=arr[k++];
    }
//merging two sorted arrays
int index1=0;
int index2=0;
k=s;

while(index1<len1 && index2<len2){
    if(first[index1]<secondary[index2]){
        arr[s++]=first[index1++];
    }
    else{
        arr[s++]=secondary[index2++];
    }
}
while(index1<len1){
    arr[s++]=first[index1++];
}
while(index2<len2){
    arr[s++]=secondary[index2++];
}

}
void mergeSort(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    //base case
    if(s>=e){
        return ;
    }

    //SORTING LEFT ARRAY
    mergeSort(arr,s,mid);
    //SORTING RIGHT ARRAY
    mergeSort(arr,mid+1,e);

    //MERGING TWO SORTED ARRAYS
    mergeTwoSortedArr(arr,s,e);
}
int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>size;
    int *arr=new int[size];
    input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(arr,size);
    cout<<endl;
    cout<<"AFTER APPLYING MERGE SORT "<<endl;
    mergeSort(arr,0,size-1);
    print(arr,size);
    cout<<endl<<endl;
   
    
    return 0;
}