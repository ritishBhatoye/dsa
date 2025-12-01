#include<iostream>
using namespace std;

class Human
{
    public:
    string name;
    string gender;
    int weight;
    
};

class Male : public Human
{
    public:
    Male(string name,string gender,int weight)
    {
        this->name=name;
        this->gender=gender;
        this->weight=weight;
        cout<<"NAME :- "<<this->name<<endl;
        cout<<"GENDER :- "<<this->gender<<endl;
        cout<<"WEIGHT :- "<<this->weight<<endl;
    }
};

int main()
{
    cout<<endl<<endl;
    Male m("Ritish","Male",80);
    // m.name="Rahul";
    // m.gender="MALE";
    // m.weight=75;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    return 0;
}