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


int max_consecutive_one(int* arr,int size)
{
    int maxi=0;
    int cnt=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}

int main()
{
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
int result=max_consecutive_one(arr,size);
cout<<"Max consecutive one :- "<<result;

    cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;

}