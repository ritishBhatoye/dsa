#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;

    int *p=&arr[0];
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    return 0;
}