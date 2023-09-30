#include<iostream>
using namespace std;
void isSorted(int *arr,int i){
    int size=arr.size();
    if(i==size-1){
        return true;
    }
    //recursive call
    return isSorted(arr,i+1);
   
}
int main(){
    return 0;
}