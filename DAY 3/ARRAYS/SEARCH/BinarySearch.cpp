#include<iostream>

using namespace std;

bool binarySearch(int arr[],int k,int size)
{
    int s=0;
    int e=size-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
            return true;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return false;

}

int main()
{
    int arr[]={10,20,30,40,60,70};
    
    int size=sizeof(arr)/sizeof(arr[0]);

    int val;

    cout<<"ENTER A VALUE TO SEARCH : ";
    cin>>val;

    if(binarySearch(arr,val,size)==true){
        cout<<val<<" IS PRESENT IN THE ARRAY "<<endl;
    }
    else{
        cout<<val<<" IS NOT PRESENT IN THE ARRAY"<<endl;
    }

    return 0;
}