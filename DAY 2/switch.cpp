#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    switch (a)
    {
    case 'A':
        cout<<"Hello"<<endl;
         break;
    case 'B':
          cout<<"Fine"<<endl;
          break;
    default:
          cout<<"SUP"<<endl;
        break;
    }
    return 0;
}