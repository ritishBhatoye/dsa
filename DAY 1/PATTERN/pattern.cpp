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
// 4
// 1234
// 1234
// 1234
// 1234
// 4321
// 4321
// 4321
// 4321

// #include<iostream>
// using namespace std;
// int  main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=n;
//         while(j>=1){
//             cout<<j;
//             j=j-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// 123
// 456
// 789
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
  
//     int i=1;
//     int c=1;
// while(i<=n){
//     int j=1;
//         while(j<=n){
//             cout<<c<<" ";
//     c=c+1;
//     j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
//*
//**
//***
//****
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
    
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// 4
// 1
// 12
// 123
// 1234
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n)
//     { int j=1;
//         while(j<=i){
//         cout<<j;
//         j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
  
//     int n;
//     cin>>n;
//    while(i<=n){
//       int j=1;
//     int c=1;
//       while(j<=n){
//    cout<<c<<"";
//    c=c+1;
//  j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// 4
// 1
// 23
// 345
// 4567
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         int val=i;
//         while(j<=i){
//          cout<<val;
//          val++;
//         j++;
//         }
// cout<<endl;
// i++;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//      while(j<=i){
//           cout<<j;
//           j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }
// 4
// 1
// 21
// 321
// 4321
// #include<iostream> 
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     //char a='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char c='A'+i-1;
//             cout<<c;    
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// 3
// ABC
// ABC
// ABC
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=0;
        
//        while(j<n){
//         char c='A'+j;
//       cout<<c;
//       j=j+1;
//        }
//        cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
// char start='A'+j-i;
//         while(j<=n){
//             cout<<start;
//            start++;
//             j=j+1;
//         }
         
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std; 
// int main(){
//     int i=1;
//     int n,c=1;

//     cin>>n;
//     while(i<=n){
//         int j=1;
        
//         while(j<=n){
//       cout<<c;
//       j=j+1;
//       c++;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
// 4
// ABCD
// EFGH
// IJKL
// MNOP
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int j;
//     int n;
//     cin>>n;
//     char c='A';
//     while(i<=n){
//     j=1;
//         while(j<=n){
//             cout<<c;
//             c++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }
// 4
// ABCD
// BCDE
// CDEF
// DEFG
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int j;
//     int n;
    
//     cin>>n;
//     while(i<=n){
//         j=1;
//         char c='A'+i-j;
//         while(j<=n){
//       cout<<c;
//       c++;
//       j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// // }
// 4
// A
// BB
// CCC
// DDDD
// ritish
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     char c='A';
//     while(i<=n){
//         int j=1;
// while (j<=i)
// {
//     cout<<c;
//     j++;
// }
// c++;
// cout<<endl;
// i++;
//     }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         char c='A';
//         while(j<=i){
//             cout<<c;
//             c=c+j;
//             j++;
            
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }
// 4
// A
// BC
// CDE
// DEFG
// ritish
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
        
//         while(j<=i){
//             char a='A'+i+j-2;
//             cout<<a;
//             j=j+1;
//         }
// cout<<endl;
//         i=i+1;
//     }
//     return  0;
// }
// 4
// D
// CD
// BCD
// ABCD
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         char a='A'+n-i;
//         while(j<=i){
//             cout<<a;
//             a++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }   
//     return 0;
// }
// 4
//    *
//   **
//  ***
// ****
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         int space=n-i;
//       while (space)
//       {
//         cout<<" ";
//       space--;
//       }
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
       
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<n-i+1;
//         j++;
//         }
//    cout<<endl;
//    i++;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i=1;
//     while(i<=n){
//         int space=i-1;
//         while(space<=n){
//             cout<<"";
//             space++;
//         }
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }