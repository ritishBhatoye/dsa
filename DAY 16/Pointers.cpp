//pointers
#include<iostream>
using namespace std;
int main(){
  int a=5;
  int *p=&a;
  cout<<a<<" VALUE OF A"<<endl;
  *p=*p+1;
  cout<<*p<<" VALUE OF *p"<<endl;
    cout<<a<<" VALUE OF A"<<endl;
  
    return 0;
}