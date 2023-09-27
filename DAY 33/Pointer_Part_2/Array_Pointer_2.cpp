#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,5,6};
    cout<<"0th ELEMENT OF AN ARRAY : "<<*arr<<endl;
    cout<<"1st ELEMENT OF AN ARRAY : "<<*(arr+1)<<endl;
    cout<<"2nd ELEMENT OF AN ARRAY : "<<*(arr+2)<<endl;
    cout<<"INCREMENTING VALUE OF 0TH ELEMENT BY ONE "<<*(arr)+1<<endl;
    return 0;
}