#include<iostream>
using namespace std;

class Hero{
    public:
    string name;
    Hero(){
        cout<<endl<<endl;
        cout<<"HI I AM CONSTRUCTOR"<<endl;
        cout<<endl<<endl;

    }
};
int main(){

    Hero *h=new Hero;
    
    return 0;
}