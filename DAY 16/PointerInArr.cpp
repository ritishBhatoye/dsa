#include<iostream>
using namespace std;

int main(){
    int arr[4]={2,4,6,10};
    cout<<"LOCATION OR ADDRESS OF THE FIRST ELEMENT IN AN ARRAY "<<arr<<endl;
    cout<<"LOCATION OF ANY OTHER ELEMENT CAN  BE "<<&arr[1]<<endl;
    return 0;
}