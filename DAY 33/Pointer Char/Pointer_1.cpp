#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    char ch[6]="abcde";
    cout<<arr<<endl;
    cout<<ch<<endl;
    char *c =&ch[0];
    //PRINTS ENTIRE ARRAY 
    cout<<c<<endl;
    return 0;
}