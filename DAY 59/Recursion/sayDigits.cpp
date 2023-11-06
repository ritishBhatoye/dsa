#include<iostream>
using namespace std;

void sayDigit(int n,string *s){
    if(n==0){
        return ;
    }
    int ans;
    ans=n%10;
    
    n=n/10;

    sayDigit(n,s);
    cout<<s[ans]<<" ";


}
int main()
{
    string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    sayDigit(n,s);
    return 0;
}