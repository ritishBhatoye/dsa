#include<iostream>
using namespace std;
int main(){
    int arr[10];
    // //ERROR
    // arr=arr+1;
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    cout<<(ptr+1)<<endl;
    cout<<arr<<endl;
    return 0;
}