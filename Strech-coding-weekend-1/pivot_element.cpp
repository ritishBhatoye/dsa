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


int pivot_brute(int* arr,int size)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>=0)
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }

    return s;
}

int pivot_element_Opt(int* arr,int size)
{
    int sum=0;
    int leftSum=0;
    
    for(int i=0;i < size;i++)
    {
        sum=sum + arr[i];
    }
    cout<<"SUM "<<sum;

    int ans=-1;
    for(int i=0;i<size;i++)
    {

        if(leftSum == sum - leftSum - arr[i])
        {
            ans=i;
            break;
        }
        else 
        {
            leftSum = leftSum + arr[i];
        }
    }
    return ans;
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
int ans=pivot_element_Opt(arr,size);

cout<<" Pivot Element : "<<ans;

    cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}