//DIFFERENCES BETWEEN POINTER
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int *ptr=&arr[0];
    cout<<"SIZE OF ptr "<<sizeof(ptr)<<endl;
    cout<<"SIZE OF first arr "<<sizeof(arr)<<endl;
    cout<<"SIZE OF ADDRESS OF PTR "<<sizeof(&ptr)<<endl;
    cout<<sizeof(*ptr)<<endl; 
        return 0;
}