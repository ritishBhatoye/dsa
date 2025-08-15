#include<iostream>
#include <cstdlib>
#include<vector>

using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" : ";
    cin>>arr[i];
    }
}

void inputVector(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++){
    cout<<"Enter the element at "<<i<<" : ";
    cin>>arr[i];
    }
}


void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void printVector(vector<int>& arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector<vector<<int>> pair_sum(vector<int>& arr,int size,int k)
{
    vector<int> ans;

    for(int i=0;i<size;)

}



int main(){

    int size1,size2;
    cout<<endl<<endl;
    cout<<"Enter the size of an Array_1 :- ";
    cin>>size1;
    cout<<endl<<endl;
    cout<<"Enter the size of an Array_2 :- ";
    int* arr1=new int[size1];
    cin>>size2;
    cout<<endl<<endl;
    cout<<"Input Elements in Array1"<<endl;
    inputArr(arr1,size1);
    int* arr2=new int[size2];

    cout<<endl<<endl;

    cout<<"Input Elements in Array2"<<endl;

    inputArr(arr2,size2);

    cout<<endl<<endl;



    cout<<endl<<endl;
    cout<<"Intersection of Arrays :- "<<endl;
    array_intersection(arr1,arr2,size1,size2);
    cout<<endl<<endl;
    
    cout<<endl;
 
    cout<<endl<<endl;

    return 0;
}