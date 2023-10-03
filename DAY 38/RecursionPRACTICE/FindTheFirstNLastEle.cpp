//FIRST AND LAST OCCURENCE OF AN ELEMENT IN  AN ARRAY
#include<iostream>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int firstElementRECURSION(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
    //base case
    if(s>e){
        return mid+1;
    }
    if(arr[mid]==x){
        return firstElementRECURSION(arr,s,mid-1,x);
   
    }
  else{
      if(arr[mid]>x){
        return firstElementRECURSION(arr,s,mid-1,x);
    }
    if(arr[mid]<x){
        return firstElementRECURSION(arr,mid+1,e,x);
    }

}   
mid=(s+e)/2;

}
int firstElement(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
     int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
           e=mid-1;
           ans=mid;
        }
        if(arr[mid]>x){
          e=mid-1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
return ans;
}
int lastElementOccurence(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
    int ans;
    while(s<e){
        if(arr[mid]==x){
            //MOVING TO RIGHT PART BECAUSE WE NEED TO FIND LAST OCCURENCE OF AN ELEMENT
            s=mid+1;
            ans= mid;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastEleOccByRecursion(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
    //base case
    if(s>e){
        return mid-1;
    }
    //recursive call
    if(arr[mid]==x){
        return lastEleOccByRecursion(arr,mid+1,e,x);
    }
    if(arr[mid]>x){
        return lastEleOccByRecursion(arr,s,mid-1,x);
    }
    if(arr[mid]<x){
        return lastEleOccByRecursion(arr,mid+1,e,x);
    }
}
int main(){
    int *arr;
    cout<<endl<<endl;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    arr=new int[size];
    cout<<endl;
    cout<<"ENTER ELEMENTS IN AN ARRAY "<<endl;
    input(arr,size);
    cout<<endl;
    print(arr,size);
    cout<<endl;
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    cout<<endl;

    //cout<<"FIRST OCCURENCE OF "<<x<<" IS PRESENT AT : "<<firstElementRECURSION(arr,0,size-1,x);
    cout<<"LAST OCCURENCE OF "<<x<<" IS PRESENT AT : "<<lastEleOccByRecursion(arr,0,size-1,x);

    

   
    cout<<endl<<endl;

    return 0;
}