#include<iostream>
using namespace std;


void mergeSort(int s,int e,int* arr)
{
    if(s>e)
        return ;

    int mid = s + (e-s)/2; 
    
    //sorting the left portion
    mergeSort(0,mid-1,arr);

    //sorting the right portion
    mergeSort(mid,e,)
}

int main()
{
    return 0;
}