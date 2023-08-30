#include<iostream>
using namespace std;

void input(){}
void print(){}
int isPresent(int *arr,int size,int e){
    
    int ans;
    for(int i=0;i<size;i++){
       if(e==arr[i])
       {
         ans=i;
         
       }
       else{
        ans=-1;
       }
    }
    return ans;
}
int main(){
   int arr[10]={1, 4, 3, 8, 3, 32, 24, 1, 23, 8};
   cout<<isPresent(arr,10,8)<<endl;
   

    return 0;
}