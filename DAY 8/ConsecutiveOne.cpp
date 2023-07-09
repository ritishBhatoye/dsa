//FIND THE CONSECUTIVE NUMBER OF ONE 
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
void consecutive(vector<int> &arr,int size){
    int maxi=0;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<"MAXIMUM NUMBER OF 1s IN A GIVEN ARRAY "<<maxi<<endl;
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY : "<<endl;
    print(arr,size);
    consecutive(arr,size);
    return 0;
}