//PRINTING ARRAY'S ELEMENTS USING POINTER
#include<iostream>
using namespace std;
int main(){
    int arr[4]={2,4,6,8};
    cout<<endl;
    cout<<endl;
    for(int i=0;i<4;i++){
         cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    int i=3;
    cout<<i[arr]<<" "<<endl;
    cout<<endl;
    
    return 0;
}