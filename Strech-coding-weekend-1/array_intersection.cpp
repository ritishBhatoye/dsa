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

void array_intersection(int* arr1,int* arr2,int s1,int s2)

{
    vector<int> ans;

    int i=0;
    int j=0;
    while(i<s1 && j<s2)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
    }

    printVector(ans,ans.size());
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