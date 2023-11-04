#include<iostream>
using namespace std;

void sayDigit(string *s,int d)
{
    if(d==0){
        return ;
    }
    int ans=d%10;
 
    d=d/10;
    sayDigit(s,d);
    cout<<s[ans]<<" ";

}

int main()
{
    string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<endl<<endl;
    int d;
    cout<<"ENTER THE DIGIT : "<<endl;
    cin>>d;
    sayDigit(s,d);
    cout<<endl<<endl;
    return 0;
}