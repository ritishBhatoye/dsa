#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<endl<<endl;
    cout<<"Size of an array :- "<<sizeof(arr)<<endl;
    int *ptr=&arr[0];

    cout<<"Size of *p "<<sizeof(ptr)<<endl;
    // cout<<"Address of first element :- "<<arr<<endl;
    // cout<<"*arr :- "<<*arr<<endl;

    // cout<<"Element at index 5 :- "<<*(arr+5)<<endl;

    // cout<<"Address of first element :- "<<&arr[0]<<endl; 
    // cout<<"Element at 5th index :- "<<*(arr+4)<<endl;
    // cout<<"i[arr] is almost eqaul to *(arr+1) :- "<<4[arr]<<endl;
    // cout<<"Size of random element of an array :- "<<sizeof(arr[0])<<endl;
    cout<<endl<<endl;
   

    return 0;
}