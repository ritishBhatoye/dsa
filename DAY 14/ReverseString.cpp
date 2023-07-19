#include<iostream>
using namespace std;
int getLength(char name[]){
    int ans=0;
    for(int i=0;name[i]!='\0';i++){
        ans++;
    }
    return ans;
}
// void print(char name[]){
//     int size=getLength(name);
//     for(int i=0;i<size;i++){

//     }
// }
void reverse(char name[]){
    int s=0;
    int e=getLength(name)-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
   
    cout<<name<<endl;
}
int main(){
    char name[20];
    cout<<"ENTER YOUR NAME :- "<<endl;
    cin>>name;
    cout<<"YOUR NAME :- "<<name<<endl;
    cout<<name<<endl;
    cout<<"LENGTH OF STRING "<<getLength(name)<<endl;
    cout<<"REVERSE OF ENTERRED STRING IS "<<endl;
    reverse(name);
    return 0;
}
//END