#include<iostream>
using namespace std;
void user_input(vector<char> &arr,int size){
    cout << "ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : " << endl;
    char a;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
}
void print(vector<char> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
//length of a STRING
// void length(vector<char> &c,int size){
//     int a
//     for(int i=0;i<size;i++){

//     }
// }
int main(){
  int size;
  cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
  cin>>size;
  vector<char> c;
  user_input(c,size);
  cout<<"ENTERRED ELEMENT IN AN ARRAY :- "<<endl;
  print(c,size);
 
    return 0;
}
//END