#include<iostream>
using namespace std;
void solve(string &str,int s,int e){
    //base case
    if(s>e){
        return ;
    }

    swap(str[e],str[s]);
    

    //recursive call
     solve(str,s+1,e-1);

}
int main(){
    string str;
    cout<<endl;
    cout<<"ENTER THE YOU WANT TO REVERSE "<<endl;
    cout<<endl<<endl;
    cin>>str;
    int e=str.length();
    solve(str,0,e-1);
    cout<<"REVERSED STRING : "<<str<<endl;
    cout<<endl<<endl;
    return 0;
}