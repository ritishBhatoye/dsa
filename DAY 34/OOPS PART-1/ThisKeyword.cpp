//"THIS KEYWORD "IS A TYPE OF KEYWORD WHICH IS USED TO STORE THE ADDRESS OF THE CURRENT OBJECT
//THIS REFERS TO THE CURRENCT INSTANCE OF THE CLASS IN THIS CASE IT IS "name" declared at 8 line
#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    string name;
    Student(string name){
        cout<<"VALUE OF THIS "<<this<<endl;
        this->name=name;
    }
};
int main(){
    cout<<endl<<endl;
Student st("Ritish");
cout<<"ADDRESS OF THE OBJECT "<<(&st)<<endl;
    cout<<endl<<endl;

    return 0;
}