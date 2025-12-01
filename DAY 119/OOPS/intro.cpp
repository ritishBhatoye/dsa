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

    Person *p=new Person;

    (*p).name="Rahul";
    (*p).age=21;


    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"NAME :- "<<p->name<<endl;
    cout<<"AGE :- "<<p->age<<endl;
    cout<<"LEVEL :- ";
    p->getLevel();
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}