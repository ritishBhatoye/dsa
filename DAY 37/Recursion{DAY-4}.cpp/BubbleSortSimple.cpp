//BUBBLE SORT :-
//IN THIS ALGO SIMPLE COMPARISION IS DONE WITH 
//{CURRENT ELEMENT} AND {NEXT ELEMENT} AND IF {NEXT ELEMENT} IS SMALLER 
//THAN {CURRENT ELEMENT} THEN SWAP THESE ELEMENTS
//ALGO
//STEP 1 :- COMPARISION ( NEXT_ELEMENT < CURRENT_ELEMENT )
//STEP 2 :- IF TRUE THEN SWAP(NEXT_ELEMENT,CURRENT_ELEMENT ) 
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
for(int i=1;i<size;i++){
    for(int j=0;j<size-i;j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j],arr[j+1]);
        }
    }
}
print(arr,size);
}
int main(){
    int size;
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    int arr[size];
    cout<<endl<<endl;

    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
    input(arr,size);
    cout<<"AFTER APPLYING BUBBLE SORT "<<endl;
    BubbleSort(arr,size);
    cout<<endl<<endl;
    return 0;
}