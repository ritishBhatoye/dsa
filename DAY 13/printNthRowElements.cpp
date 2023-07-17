// //PRINTING NTH ROW ELEMENT
// //IT IS OBVIOUS THAT NUMBER OF ELEMENTS TO BE PRINTED WILL BE EQUAL TO ROW NUMBER IF ROW NUMBER IS 4 THEN 4 ELEMENTS HAS TO BE PRINTED
// #include<iostream>
// using namespace std;
// int B(int n,int r){
//     long long res=1;
//     for(int i=0;i<r;i++){
//         res=res*(n-1);
//         res=res/(i+1);
//     }
//     return res;
// }
// void print_row(int n,int r){
//     for(int r=1;r<=n;r++){
//         cout<<B(n-1,r-1)<<endl;
//     }
// }
// int main(){
//   int n,r;
//   cout<<"ENTER THE ROW NUMBER FOR PRINTING THE ELEMENTS "<<endl;
//   cin>>n;
//   cout<<"ENTER THE COLOUMN NUMBER FOR PRINTING THE ELEMENTS "<<endl;
//   cin>>r;
//   cout<<"HOWEVER IN THE CASE OF PRINTING Nth ROW NUMBER OF ROWS WILL EQUAL TO NUMBER OF COLOUMNS(elements)"<<endl;
//   print_row(n,r);
//     return 0;
// }
//OPTIMAL APPROACH CAN BE
#include<iostream>
using namespace std;
void print_row(int n,int r){
    long long ans=1;
for(int i=1;i<=n;i++){
     cout<<ans<<" ";
    ans=ans*(n-i);
    ans=ans/(i);
   
}
}
int main(){
 int n;
 int r;
 n=r;
 cout<<"ENTER THE VALUE OF N AND R :- "<<endl;
 cin>>n;
 cout<<n<<" th ROW ELEMENTS WILL BE "<<endl;
 print_row(n,r);
    return 0;
}
