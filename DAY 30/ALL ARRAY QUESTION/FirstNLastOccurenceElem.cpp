#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void  firstNlastelementocc(int *arr,int size,int x){
int s=0;
int e=size-1;
int fo=0;
int lo=0;
int mid=(s+e)/2;
while(s<=e){
    if(arr[mid]==x){
        return mid;
    }
    if(arr[mid]>x){
        e=mid-1;
        fo=mid;
    }
    else{
        s=mid+1;
        lo=mid;
    }
    mid=(s+e)/2;
}
int ans[2]={lo,fo};
return ans;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
        input(arr,size);
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    firstNlastelementocc(arr,size,x);
    return 0;
} 