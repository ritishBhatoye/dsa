#include<iostream>
using namespace std;
void Say(int n,string arr[]){

   if(n==0)
     return ;
    int a=n%10;
    n=n/10;
    
  Say(n,arr);
  cout<<arr[a]<<" ";
    }

int main(){
    int n;
    cout<<"ENTER THE NUMBER :- "<<endl;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    Say(n,arr);
    cout<<endl;
return 0;
}
