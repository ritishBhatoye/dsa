//FINDING MISSING NUMBER
//FOR EXAMPLE IF arr[1,2,4,5] then missing array element is 
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
void missing(vector<int> &arr,int size){
    int flag=0;
    for(int i=1;i<=size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
            else if(arr[j]!=i){
                cout<<"MISSING ELEMENT IN AN ARRAY IS : "<<i<<endl;
            }
        }
    }
}
int main(){
    vector<int> arr;
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>size;
    arr[5]={1,2,4,5};
    user_input(arr,size);
    cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
    print(arr,size);
    missing(arr,size);

    return 0;
}