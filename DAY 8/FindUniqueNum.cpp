//UNIQUE NUMBER IN AN ARRAY
#include<iostream>
using namespace std;
void user_input(vector<int> &arr, int size)
{
    cout << "ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : " << endl;
    int a;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void findUnique(vector<int> &arr,int size){
    for(int i=0;i<size;i++){
        int num=arr[i];
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            cout<<"UNIQUE ELEMENT IN AN ARRAY "<<num<<endl;
        }
        
    }
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(arr,size);
    findUnique(arr,size);
    return 0;
}