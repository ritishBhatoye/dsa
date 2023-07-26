//STATIC KEYWORD
#include<iostream>
using namespace std;
class Person{
public:
static string name;
};
string Person::name="RITISH";
int main(){
    cout<<Person::name<<endl;
    return 0;
}