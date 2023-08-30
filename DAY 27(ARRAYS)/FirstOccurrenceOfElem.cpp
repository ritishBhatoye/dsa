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
         break;
       }
       else{
        ans=-1;
       }
    }
    return ans;
}
int main(){
   int arr[8]={7, 5, 2, 11, 2, 43, 1, 1};
   cout<<isPresent(arr,8,10)<<endl;
   

    return 0;
}