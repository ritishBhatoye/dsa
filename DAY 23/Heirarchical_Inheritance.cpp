#include<iostream>
using namespace std;
class Human{
    public:
int weight;
    int height;
};
class Male:public Human{
    public:
    string name;
    string prof;
    string Role;
};
class Female:public Human{
    public:
    string name;
    string prof;
    string Role;
};
int main(){
Male m;
    m.weight=90;
    m.height=6;
    m.name="ANIL";
    m.prof="DOCTOR";
    m.Role="FATHER";
    Female f;
    f.height=6;
    f.weight=65;
    f.name="NIKITA";
    f.Role="MOTHER";
    f.prof="TEACHER";
    cout<<"MALE DESCRIPTION :- "<<endl;
    cout<<"NAME       :- "<<m.name<<endl;
    cout<<"PROFESSION :- "<<m.prof<<endl;
    cout<<"ROLE       :- "<<m.Role<<endl;
    cout<<"WEIGHT     :- "<<m.weight<<endl;
    cout<<"HEIGHT     :- "<<m.height<<endl;
    cout<<"FEMALE DESCRIPTION :- "<<endl;
    cout<<"NAME       :- "<<f.name<<endl;
    cout<<"PROFESSION :- "<<f.prof<<endl;
    cout<<"ROLE       :- "<<f.Role<<endl;
    cout<<"WEIGHT     :- "<<f.weight<<endl;
    cout<<"HEIGHT     :- "<<f.height<<endl;
 
    return 0;
}