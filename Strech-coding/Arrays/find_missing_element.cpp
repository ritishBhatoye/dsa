#include<iostream>
#include<vector>
#include<algorithm>
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


int find_missing_element(int* arr, int size)
{
    int sum = ((size + 1) * (size)) / 2;


    int elements_sum=0;
    for(int i=0;i<size;i++){
        elements_sum=elements_sum+arr[i];
    }
    int ans=sum-elements_sum;
    return ans;
}   

int find_missing_element_OPT(int* arr,int size)
{

    

}

int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array Array :- ";
    cin>>size;
cout<<endl;
int* arr=new int[size];

inputArr(arr,size);
cout<<endl;

printArr(arr,size);
cout<<endl;

printArr(arr,size);
cout<<endl;
int result=find_missing_element(arr,size);
cout<<"Missing element from the array :- "<<result;

    cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}