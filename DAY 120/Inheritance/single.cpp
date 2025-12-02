#include<iostream>
using namespace std;

class Human
{
    public:
    string name;
    string gender;
};

class Male:public Human
{
    public:
    Male(string name,string gender)
    {
        this->name=name;
        this->gender=gender;
    }
};

int main()
{
    Male m("Ritish","MALE");
    cout<<endl<<endl;
    cout<<"NAME :- "<<m.name<<endl;
    cout<<"GENDER :- "<<m.gender<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;
}