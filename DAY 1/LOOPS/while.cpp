// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n<=5){
//         cout<<n<<endl;
//         n=n+1;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int a;
//     cin>>a;
//     while(i<=a){
//         cout<<i<<endl;
//         i=i+1;
//     }
//     return 0;
// }
//SUM OF N SERIES NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cin>>n;
//     int a=1;
//     while(a<=n){
        
//         sum+=a;
//         a=a+1;
//     }
//     cout<<"SUM OF "<<n<<" is "<<sum<<endl;
//     return 0;
// }
//SUM OF EVEN NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     int sum=0;
//     cin>>n;
//     while(i<=n){
//         if(i%2==0){
//        sum+=i;
//         }
//         i=i+1; 
//         }
//         cout<<"SUM IS "<<sum<<endl;
//     return 0;
// }
//TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT
// #include<iostream>
// using namespace std;
// int  main(){
//     int i=2;
//     int n;
//     int couter=0;
//     cin>>n;
//     while(i<=n){
//         if(n%i==0){
//             cout<<n<<" is PRIME NUMBER"<<endl;
//         }
//         else{
//             cout<<n<<" is not a PRIME NUMBER"<<endl; 
//         }
//         i=i+1;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

// int counter=0;
// int i=2;
// int n;
// cin>>n;
// while(i<n)
// {
//     if(n%i==0)
// {
//   counter++;
// }
// else{
  
// }
// i=i+1;
// }

//  return 0;
// }
//prime number
// #include<iostream>
// using namespace std;
// int main(){
//     int i=2;
//     int n;
//     cin>>n;
//     while(i<n){
//         if(n%i==0){
//             cout<<n<<" is not PRIME for "<<i<<endl;
//         }
//         else{
//             cout<<n<<" is PRIME for "<<i<<endl;
//         }
//         i=i+1;
//     }
//     return 0;
// }
//PATTERNS
// *
// **
// ***
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//          cout<<"*"<<endl;
//     }
//     return 0;
// }

// ****
// ****
// ****
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<"*";
//         }
//         cout<<"*"<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     int n;
//     cin>>n;
//     while(i<n){
//         int j=0;
//         while(j<n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// 111
// 222
// 333
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//      cout<<i;
//      j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }