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
 
int partition(int * arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //PLACE PIVOT AT RIGHT POSITION
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //LEFT AND RIGHT WALA PART SAMBAL LETE HAI
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
     while(arr[i]<pivot){
        i++;
     }
     while(arr[j]>pivot){
        j--;
     }
     if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
     }
    }
    return pivotIndex;
}
void quickSort(int *arr,int s,int e){
if(s>=e){
    return ;
}
//PARTITION KARENGE
int p=partition(arr,s,e);
//LEFT PART SORT KARENGE
quickSort(arr,0,p-1);
//RIGHT PART SORT KARENGE
quickSort(arr,p+1,e);

}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;7
    int arr[size];
    input(arr,size);
    quickSort(arr,0,size-1);
    print(arr,size);

    return 0;
}