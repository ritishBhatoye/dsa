#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    string Class;
    int age;
    void pName(){
        cout<<"STUDENT NAME     : "<<name<<endl;
    }
    void pRollNo(){
        cout<<"STUDENT ROLL NO. : "<<rollNo<<endl;
    }
    void pClass(){
        cout<<"STUNDET CLASS    : "<<Class<<endl;
    }
    void pAge(){
        cout<<"STUDENT AGE      : "<<age<<endl;
    }

};
int main(){
    Student st;
    st.name="RITISH";
    st.rollNo=27;
    st.Class="XII";
    st.age=18;
    cout<<endl<<endl;
    st.pName();
    st.pRollNo();
    st.pClass();
    st.pAge();
    cout<<endl<<endl;
    return 0;
}