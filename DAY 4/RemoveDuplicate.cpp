#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
    cout<<"ENTER THE ELEMENT IN AN ARRAY "<<endl;
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
void sort(vector<int> &arr,int size){
for(int i=0;i<size;i++){
    int temp;
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
}
 void remove(vector<int> arr,int size){
    sort(arr,size);
     vector<int> ans;
     for(int i=0;i<size;i++){
      if(arr[i]!=arr[i+1])
       { ans.push_back(arr[i]);}
     }
     size=ans.size();
     print(ans,size);
 }
int main()
{     
  vector<int> arr;
  int size;
  cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
  cin>>size;
  user_input(arr,size);
   cout<<"ENTERED ELEMENTS ARE "<<endl;
  print(arr,size);
  
  cout<<"REMOVING DUPLICATE ELEMENTS : "<<endl;
  remove(arr,size);
    return 0;
}