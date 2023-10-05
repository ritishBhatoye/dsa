#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>& arr,int size){
    for(int i=0;i<size;i++){
       int e=arr[i];
       arr.push_back(e);
    }
}
void print(vector<int>& arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int position(vector<int> &arr,int s,int e,int k){
int mid=s+(e-s)/2;
while(s<=e){
	if(arr[mid]==k){
		return mid;
	}
	if(arr[mid]>k){
		//move to LEFT
		e=mid-1;
	}
	if(arr[mid]<k){
		//move to RIGHT
		s=mid+1;
	}
}
}
int InesertInAnArray(vector<int> &arr,int s,int e,int k){
	int cnt=0;
	for(int i=s;i<=e;i++){
    if(arr[i]<=k){
        cnt++;
	  }
	}
   int ans=cnt+s;
   return ans;
}
int searchInsert(vector<int>& arr, int m)
    {
	int s=0,e=arr.size()-1;
    
	if(position(arr,s,e,m)!=-1){
     return position(arr,s,e,m);
	}
	else{
		return InesertInAnArray(arr,s,e,m);
	}
}
int main(){
    int size;
    cout<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    vector<int> arr;
    input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<endl<<endl;
}