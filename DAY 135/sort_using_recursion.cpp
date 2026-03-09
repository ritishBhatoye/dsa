#include<iostream>
using namespace std;


void merge(int s,int e,int* arr)
{
    int l1 =  mid - s + 1; 
    int l2 =  e - mid;
    

    int* first = 

    int k=s;

    for(int i=0;i<l1;i++)
    {
        
    }

}

void mergeSort(int s,int e,int* arr)
{
    if(s>e)
        return ;

    int mid = s + (e-s)/2; 
    
    //sorting the left portion
    mergeSort(0,mid-1,arr);

    //sorting the right portion
    mergeSort(mid,e,arr);

    merge(s,e,arr);
}

int main()
{
    return 0;
}