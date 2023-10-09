#include<iostream>
using namespace std;

class Person{
    
    public:
    //DEFUALT CONSTRUCTOR
      Person()
      {
        cout<<"I AM DEFAULT CONSTRUCTOR "<<endl;
      }
      //PARAMETERIZED COSNTRUCTOR
      Person(string s )
      {
        cout<<"I AM PARAMETERIZED CONSTRUCTOR "<<s<<endl;
      }
      
    };

int main(){
    Person *p=new Person("RITISH");
    Person *p1=new Person;
    return 0;

}