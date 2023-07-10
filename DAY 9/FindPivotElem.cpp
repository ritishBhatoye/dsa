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
int pivot(vector<int> &arr,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
        s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
int size;
cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
cin>>size;
vector<int> arr;
user_input(arr,size);
cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
print(arr,size);
cout<<"PIVOT ELEMENT IS "<<pivot(arr,size)<<endl;
    return 0;
}