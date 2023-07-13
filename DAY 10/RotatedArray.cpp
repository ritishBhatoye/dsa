#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
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
void RotateByK(vector<int> &arr,int size,int k)

{ size=arr.size();
    vector<int> ans(size);
    for(int i=0;i<size;i++){
    ans[(i+k)%size]=arr[i];
}
arr=ans;
print(arr,size);
}
int main(){
    int size;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    cout<<"FOR HOW MANY PLACE YOU WANT TO ROTATE AN ARRAY "<<endl;
    int k;
    cin>>k;
    cout<<"ROTATED ARRAY WILL BE "<<endl;
    RotateByK(arr,size,k);
    return 0;
}