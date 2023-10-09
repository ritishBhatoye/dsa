#include<iostream>
using namespace std;

class Person{
    
    public:
    int age;
    string name;

    //DEFUALT CONSTRUCTOR
      Person()
      {
        cout<<"I AM DEFAULT CONSTRUCTOR "<<endl;
      }
      //PARAMETERIZED COSNTRUCTOR
      Person(string s)
      {
        cout<<"I AM PARAMETERIZED CONSTRUCTOR "<<s<<endl;
      }
      
      Person(string name,int age){
        this->age=age;
        this->name=name;
      }

    };

int main(){
    // Person *p=new Person("RITISH");
    // Person *p1=new Person;
    Person p("RITISH",19);
    //COPYING A VALUE OF AN OBJECT P1 TO P
    Person p1(p);
    //COPYING USING ASSINGMENT OPERATOR
    Person p2;
    p2=p;
    cout<<" P NAME  :- "<<p.name<<endl;
    cout<<" P1 NAME :- "<<p1.name<<endl;
    cout<<" P AGE   :- "<<p.age<<endl;
    cout<<" P1 AGE  :- "<<p1.age<<endl;
    cout<<" P2 AGE  :- "<<p2.age<<endl;
    cout<<" P2 NAME :- "<<p2.name<<endl;


    return 0;

}