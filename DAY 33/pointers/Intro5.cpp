#include<iostream>
using namespace std;
int main(){
    int num=10;
    int *a=&num;
    int p=*a;
    (*a)++;
    cout<<*a<<endl;
    cout<<num<<endl;
    return 0;
}