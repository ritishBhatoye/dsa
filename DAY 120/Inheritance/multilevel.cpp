#include<iostream>
using namespace std;

class Human
{
    public:

    string name;
    string gender;
};

class Father:public Human
{
    public:

    int height;
};

class Son:public Father
{
    public:
    int weight;

    Son(string name,string gender,int height,int weight)
    {
        this->name=name;
        this->gender=gender;
        this->height=height;
        this->weight=weight;
    }
};


int main()
{
    cout<<endl<<endl;
    Son s("Ritish","Male",185,80);

    cout<<endl<<endl;
    cout<<"NAME :- "<<s.name<<endl;
    cout<<"GENDER :- "<<s.gender<<endl;
    cout<<"HEIGHT :- "<<s.height<<endl;
    cout<<"WEIGHT :- "<<s.weight<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;

}