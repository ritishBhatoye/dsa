//SEARCH IN ROTATE AND SORTED ARRAY 
#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
    cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;
    int a;
    for(int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int BinarySearch(vector<int> &arr,int s,int e,int key){
    int size=arr.size();
    s=0;
    e=size-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==key){
   return mid;
    }
    else if(arr[mid]<key){
   s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return -1;
}
int pivot(vector<int> &arr,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int Search(vector<int> &arr,int size,int k){
    int p=pivot(arr,size);
    if(k>=arr[p] && k<=arr[size-1]){
        return BinarySearch(arr,p,size-1,k);
    }
    else{
        return BinarySearch(arr,0,p-1,k);
    }
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    int key;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH "<<endl;
    cin>>key;
    cout<<"ELEMENT "<<key<<" IS PRESENT AT "<<Search(arr,size,key)<<endl;
    return 0;
}
