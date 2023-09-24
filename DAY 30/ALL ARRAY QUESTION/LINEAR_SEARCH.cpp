//LINEAR SEARCH 
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
bool LinearSearch(int *arr,int size,int x){
    int i=0;
    while(i<size){
    if(arr[i]==x)    
    return true;
    i++;
    }
return false;
}
int position(int *arr,int size,int x){
    int i=0;
    int ans=0;
    while(i<size){
        if(arr[i]==x){
        ans=i;
        break;
        }
        i++;
    }
    return ans;
}
int main(){
    
    int size;
    cin>>size;
    int arr[size];
    input(arr,size);
    print(arr,size);
    int x;
    cout<<endl;
    cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
    cin>>x;
    if(LinearSearch(arr,size,x)){
        cout<<x<<" IS PRESENT IN THE ARRAY "<<"AT POSTION "<<position(arr,size,x)<<endl;
    }
    else{
        cout<<x<<"  IS NOT PRESENT IN THE ARRAY "<<endl;
    }
    return 0;
}