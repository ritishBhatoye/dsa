#include<iostream>
using namespace std;

int p(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    else{
        return a*p(a,b-1);
    }
}

int main()
{
    int a,b;
    cout<<endl<<endl;
    cin>>a;
    cin>>b;
    cout<<"RESULT :- "<<p(a,b)<<endl;
    cout<<endl<<endl;
    return 0;
}