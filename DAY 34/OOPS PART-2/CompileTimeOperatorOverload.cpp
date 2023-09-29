#include<iostream>
using namespace std;
class B
{
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }
    void operator+(B &ob){
        int val1=this->a;
        int val2=ob.a;
        cout<<"OUTPUT : "<<val2-val1<<endl;
    }
    void operator() (){
        cout<<"MAIN BRACKET HU "<<this->a<<endl;
    }
};
int main(){
    // B ob;
    // ob.a=1;
    // ob.b=2;
    // cout<<endl<<endl;
    // cout<<ob.add()<<endl;
    // cout<<endl<<endl;
    B ob1,ob2;
cout<<endl<<endl;
    ob1.a=4;
    ob2.a=7;
    ob1+ob2;
   
   ob1();
cout<<endl<<endl;

    return 0;
}