#include<iostream>
using namespace std;
void print(int *p){
    cout<<"ADDRESS OF A : "<<p<<endl;
    cout<<"VALUE OF A   : "<<*p<<endl;
}
void update(int *p){
    *p=*p+1;
}
int main(){
    int a=5;
    int *p=&a;
    cout<<*p<<endl;
    update(p);
    cout<<*p<<endl;
    print(p);
    
    int arr[5]={1,2,3,4,5};
    
    return 0;
}