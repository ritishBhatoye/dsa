#include<iostream>
using namespace std;
void sayDigit(int n,string *arr){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    //recursive call
    
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";

}
int main()
{
    int n;
    cout<<endl;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<"ENTER THE NUMBER "<<endl;
cin>>n;
sayDigit(n,arr);
cout<<endl<<endl;
    return 0;
}