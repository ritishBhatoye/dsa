#include<iostream>
using namespace std;
void sayDigit(int n,string *arr){
    //base case
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
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<endl<<endl;

    cout<<"ENTER THE DIGIT "<<endl;
    cin>>n;
    sayDigit(n,arr);
    cout<<endl<<endl;

    return 0;
}