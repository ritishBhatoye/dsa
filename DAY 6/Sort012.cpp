//SORT Os 1s 2s
#include<iostream>
using namespace std;
 void user_input(vector<int> &arr,int size){
     cout<<"ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : "<<endl;
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
    int temp;
    for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++){
        if(arr[i]>=arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
        }
    }
}
print(arr,size);
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED VALUES IN AN ARRAY : "<<endl;
    print(arr,size);
    cout<<"AFTER SORTING THE ARRAY : "<<endl;
    sort(arr,size);
    return 0;
}