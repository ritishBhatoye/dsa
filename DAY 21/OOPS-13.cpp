//STATIC FUNCTION
#include<iostream>
using namespace std;
class Person{
    public:
    static int  num;
    static int print(){
        return num;
    }
};
int Person::num=10; 
int main(){
    cout<<Person::num<<endl;
    return 0;
}