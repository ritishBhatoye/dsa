// CONSTRUCTORS
#include<iostream>
using namespace std;
class person{
public:
//DEFAULT CONSTRUCTOR
  person(){
    cout<<"I AM PERSON "<<endl;
  }
//PARAMETERIZED CONSTRUCTOR
person(string name){
    cout<<"PERSON NAME IS "<<name<<endl;
}  
};
int main(){
   // person p;
    person p("RITISH");
    return 0;
}