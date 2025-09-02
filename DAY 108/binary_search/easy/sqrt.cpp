#include<iostream>
#include <utility> 

using namespace std;

 void inputArr(int* arr,int size)
 {
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element of an array at "<<i<<" ";
        cin>>arr[i];
    }
 }

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int sqrt(int n)
{
    int s=1;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        int midSq=mid*mid;
        if(midSq==n)
        {
           ans=mid;
           break;
        }
        else if(midSq<n)
        {
            ans=mid;
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }

    }
    return ans;
}

int main(){
    cout<<endl;
  
  

    cout<<endl<<endl;
    int k;
    cout<<"Enter the Elment for find the sqaure root :- ";
    cin>>k;
    cout<<endl<<endl;
    
    int ans=sqrt(k);
    cout<<"Sqaurt root of "<<k<<" :- "<<ans;
    cout<<endl<<endl;



    cout<<endl;

    return 0;
}