#include<iostream>
using namespace std;

void counting(int s,int d){
   cout<<"SOURCE  "<<s<<" "<<" DESTINATION "<<d<<endl;
   if(s==d){
    cout<<"REACHED DESTINATIO "<<endl;
    return ;
   }
   //recursive call
   counting(s+1,d);
}

int main()
{
    int s,d;
    cout<<endl<<endl;
    cin>>s>>d;
    counting(s,d);
    cout<<endl<<endl;

    return 0;
}