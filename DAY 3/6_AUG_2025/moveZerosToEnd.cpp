#include<iostream>
#include<vector>
using namespace std;


void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//BRUTE FORCE
void moveZerosToEnd(int* arr,int size){
  vector<int> temp;

    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    for(int i=temp.size();i<size;i++){
        arr[i]=0;
    }

    printArr(arr,size);
}
//Optmized Approach 
void movingZerosToEndOPT(int* arr, int size) {
    int i = 0; 

    for (int j = 0; j < size; j++) {
        if (arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    printArr(arr, size);
}
// from the striver POV
void movingZerosToEndOPTStriver(int* arr, int size) {
    int j = -1; 

    for (int i = 0; i < size; i++) {
        if (arr[i]== 0) {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
           j++;
        }
    }

    printArr(arr, size);
}

int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array ";
    cin>>size;
cout<<endl;
int* arr=new int[size];
inputArr(arr,size);
cout<<endl;
printArr(arr,size);
    cout<<endl<<endl;
cout<<"After moving Zeros to end"<<endl;
movingZerosToEndOPTStriver(arr,size);
    cout<<endl<<endl;


    return 0;
}