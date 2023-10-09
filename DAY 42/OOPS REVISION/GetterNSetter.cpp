#include<iostream>
using namespace std;

class Home{

private:

    int weight;
    int height;

public:
    void setWeight(int weight)
    {

        this->weight=weight;
    }
    void setHeight(int height)
    {
        this->height=height;
    }
    
    int getWeight(){
        return this->weight;
    }
    int getHeight(){
        return this->height;
    }
};

int main(){
//object creation
Home h;
h.setHeight(6);
h.setWeight(100);
cout<<endl<<endl;
cout<<"WEIGHT :- "<<h.getWeight()<<endl;
cout<<"HEIGHT :- "<<h.getHeight()<<endl;
cout<<endl<<endl;
    return 0;
}