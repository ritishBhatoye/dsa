#include<iostream>
using namespace std;
class Person{
    public:
     string name;
     int age;
};
class quality:public Person{
    public:
    bool working;
    
};
int main(){
    quality q;
    cin>>q.name;
    cin>>q.age;
    q.working=true;
    cout<<"NAME : "<<q.name<<endl;
    cout<<"AGE  : "<<q.age<<endl;
    if(q.working){
        cout<<"JOB STATUS : EMPLOYED"<<endl;
    }
    else{
        cout<<"JOB STATUS : UNEMPLOYED"<<endl;
    }
    return 0;
}