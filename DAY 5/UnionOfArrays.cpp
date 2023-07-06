//union of two arrays in an sorted ORDER
//1.BRUTE FORCE
#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
    cout<<"ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : "<<endl;
    int a;
    for(int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
void sort(vector<int> arr,int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i]>=arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
}
void un(vector<int> &arr1,vector<int> &arr2){
    vector<int> u;
    int s1=arr1.size();
    int s2=arr2.size();
    for(int i=0;i<s1;i++){      
        u.push_back(arr1[i]);
    }
    for(int i=0;i<s2;i++){
        if(u[i]!=arr2[i] && u.back()!=arr2[i])
        {u.push_back(arr2[i]);}
    }
    int s=u.size();
    print(u,s);
}
int main(){
    int s1;
    vector<int> a1;
    cout<<"ENTER THE SIZE OF FIRST ARRAY "<<endl;
    cin>>s1;
    int s2;
    vector<int> a2;
    cout<<"ENTER THE SIZE OF SECOND ARRAY "<<endl;
    cin>>s2;
    user_input(a1,s1);
    cout<<"ENTERRED ELEMENTS IN FIRST ARRAY : "<<endl;
    print(a1,s1);
    user_input(a2,s2);
    cout<<"ENTERRED ELEMENTS IN SECOND ARRAY : "<<endl;
    print(a2,s2);
    cout<<"UNION OF TWO ARRAYS : "<<endl;
    un(a1,a2);
    return 0;
}
//OPTIMIZED METHOD
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> un;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(un.size()==0 || un.back()!=a[i]){
                un.push_back(a[i]);
            }
            i++;
        }
        else{
             if(un.size()==0 || un.back()!=b[j]){
                un.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
         if(un.size()==0 || un.back()!=b[j]){
                un.push_back(b[j]);
            }
            j++;
    }
while(i<n1){
         if(un.size()==0 || un.back()!=a[i]){
                un.push_back(a[i]);
            }
            i++;
    }
return un;
}