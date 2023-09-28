#include<iostream>
using namespace std;
//WITHOUT USING "Hero& temp" this will result into error which is due to PASS BY VALUE (AS IT CREATES COPY OF TEMP)
// whereas USING PASS BY REFERENCE THAT IS "Hero& temp" will work accurately
 class Student{
    public:
    int age;
    string name;

    Student(string name,int age){
        this->name=name;
        this->age=age;
    }
    Student(Student& temp){
          this->name=temp.name;
          this->age=temp.age;
    }
    void print(){
        cout<<"NAME "<<name<<endl;
        cout<<"AGE "<<age<<endl;
    }
};

int main(){
    Student S("RITISH",19);
    cout<<endl<<endl;
    S.print();
    Student S1(S);
    S1.print();
    cout<<endl<<endl;
 
    return 0;
}