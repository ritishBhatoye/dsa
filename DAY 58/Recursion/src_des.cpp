#include<iostream>
using namespace std;

void s_d(int src,int des)
{
        if(src==des){
            cout<<"REACHED AT BASE "<<endl;
            return ;
        }
        cout<<"START "<<src<<" "<<" DEST "<<des<<endl;
        s_d(src+1,des);
}

int main()
{
    int s=0,d=10;
    cout<<endl<<endl;
    s_d(s,d);
    cout<<endl<<endl;

    return 0;
}