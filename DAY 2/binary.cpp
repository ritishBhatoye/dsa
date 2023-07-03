// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         n=n/10;


//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int decimal,binary=0,remainder,product=1;
//     cin>>decimal;
//     while(decimal!=0){
//         remainder=decimal%2;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int num,binary=0,remainder,product=1;
    cin>>num;
    while(num!=0){
        remainder=num%2;
        binary=binary+(remainder*product);
        num=num/2;
        product*=10;
    }
    cout<<"BINARY FORM IS "<<binary;
    return 0;
}