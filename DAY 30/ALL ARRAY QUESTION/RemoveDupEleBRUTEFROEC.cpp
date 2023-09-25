//REMOVE DUPLICATE ELEMENT FROM AN ARRAY BRUTE FORCE
#include<iostream>
#include<set>
using namespace std;
void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void removeDup(int *arr,int size){
    set<int> set;
    int i=0;
    int j=i+1;
    while(i<size){
        if(arr[i]==arr[j]){
           set       
        }
        i++;
        j++;
    }
}
int main(){

    return 0;
}