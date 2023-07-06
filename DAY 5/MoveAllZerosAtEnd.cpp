//MOVE ALL ZERO TO THE END OF AN ARRAY
//BRUTE FORCE
/*
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
void MoveZeros(vector<int> &arr,int size){
    vector<int> temp;
    vector<int> zero;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
        else if(arr[i]==0){
            zero.push_back(arr[i]);
        }
    }
    for(int i=0;i<size;i++){
        temp.push_back(zero[i]);
    }
    print(temp,size);
}
int main(){
    int n;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>n;
    user_input(arr,n);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(arr,n);
    cout<<"AFTER MOVING ZEROS TO AN END "<<endl;
    MoveZeros(arr,n);
    return 0;
}*/
//OPTMIZED SOLUTION
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
void MoveZeros(vector<int> arr,int size){
    vector<int> temp;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
      temp.push_back(arr[i]);
        }
    }
       int n=temp.size();
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

    for(int i=n;i<size;i++){
     arr[i]=0;
    }
    print(arr,size);
}
int main(){
    int n;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>n;
    vector<int> arr;
    user_input(arr,n);
cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,n);
    cout<<"MOVING ZEROS TO THE END "<<endl;
    MoveZeros(arr,n);
    return 0;
}