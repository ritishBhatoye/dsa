#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[],int l,int r,int k){
    priority_queue<int> pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<=r;i++)
    {
      
      if(arr[i]<pq.top()){
        pq.pop();
        pq.push(arr[i]);
      }
    }
    int ans=pq.top();
    return ans;
}

int main(){

    int arr[6]={7,10,4,3,20,15};
    int l=0,r=5;
    int k;
    cout<<endl<<endl;
    cout<<"ENTER THE K-TH NUMBER TO FIND K-TH SMALLEST : "<<endl;
    cin>>k;
    cout<<"K-TH SMALLEST :- "<<kthSmallest(arr,l,r,k)<<endl;
    cout<<endl;
    return 0;
}