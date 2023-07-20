#include<iostream>
using namespace std;
int main(){
    int first=8;
    int *p=&first;
    cout<<(*p)++<<endl;
    cout<<first<<endl;
    return 0;
}