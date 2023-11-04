#include<iostream>
using namespace std;

void reverse(string &st,int s,int e){
if(s>e){
    return ;
}
swap(st[s],st[e]);
reverse(st,s+1,e-1);
}

int main()
{
    cout<<endl<<endl;
    string s;
    cin>>s;
    int size=s.length();
    cout<<s<<endl;
    reverse(s,0,size-1);
    cout<<endl;
    cout<<s<<endl;
    cout<<endl<<endl;
    return 0;
}