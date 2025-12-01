#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    private:
    int level;

    public:
    void getLevel()
    {
        cout<<level<<endl;
    }
    void setLevel(int l)
    {
        level=l;
    }
    //As This following consttructor Run first means that it is always being executed at the time of the object creation 
    Person()
    {
        cout<<"HNJI PERSON JI :- "<<endl;
    }
    //Parameterized Constructor
    Person(string name)
    {
        this->name=name;
    }
};


int main()
{

    ///Static Allocation

    cout<<endl<<endl;
    // Person p;
    // p.name="Ritish";
    // p.age=23;
    // p.setLevel(2);
    //Dyanamic Allocation

    Person p("RAHUL BRO");
    cout<<"NAME :- "<<p.name<<endl;
    Person pa(p);
    cout<<"PA(Object) NAME :- "<<pa.name<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
  
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}