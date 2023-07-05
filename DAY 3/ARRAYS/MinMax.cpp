#include<iostream>
using namespace std;
void getMinMax(int n[],int size){
    int max=n[0];
    int min=n[0];
    for(int i=0;i<size;i++){
        if(max<n[i]){
         max=n[i];
        }
        if(min>n[i]){
            min=n[i];
        }
    }
    cout<<"MAXIMUM VALUE IS "<<max<<endl;
    cout<<"MINIMUM VALUE IS "<<min<<endl;
}
int main(){
 int size;
 cin>>size;
 int a[100];
 cout<<"ENTER THE ELEMENTS IN AN ARRAY "<<endl;
 for(int i=0;i<size;i++){
    cin>>a[i];
 }
 cout<<"ENTERED ELEMENTS IN AN ARRAY "<<endl;
 for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
 }
 getMinMax(a,size);
    return 0;
}


    // #include<iostream>
    // #include <climits>
    // using namespace std;
    // int getMax(int n[],int size){
    //     int max=INT_MAX;
    //     for(int i=0;i<size;i++){
    //         if(n[i]>max){
    //             max=n[i];
    //         }
    //     }
    //     return max;
    // }
    // int getMin(int n[],int size){
    //     int min=INT_MIN;
    //     for(int i=0;i<size;i++){
    //         if(n[i]<min){
    //             min=n[i];
    //         }
    //     }
    //     return min;
    // }
    // int main(){
    //     int size;
    //     cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    //     cin>>size;
    //     int n[100];
    //     for(int i=0;i<size;i++){
    //         cin>>n[i];
    //     } 
    //     cout<<"ENTERED NUMBERS IN AN ARRAY "<<endl;
    //     for(int i=0;i<size;i++){
    //         cout<<n[i]<<endl;
    //     }
    //     cout<<"MAX "<<getMax(n,size)<<endl;
    //     cout<<"MIN "<<getMin(n,size)<<endl;
    //     return 0;
    // }