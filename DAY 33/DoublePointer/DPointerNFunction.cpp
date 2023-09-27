#include<iostream>
using namespace std;
void print(int **q){
    cout<<**q<<endl;
}
void update(int **q){
    **q=**q+1;
}
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<"BEFORE "<<endl;
    print(q);
    update(q);
    cout<<"AFTER  "<<endl;
    print(q);

    return 0;
}
