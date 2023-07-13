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
void reverse(vector<int> &arr,int size){
   int s=0;
   int e=size-1;
   while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
   }
   print(arr,size);
}
void SumOfArrays(vector<int> &a1,vector<int> &a2){
    int i=a1.size()-1;
    int j=a2.size()-1;
    int  carry=0;
    vector<int> ans;
    while(i>=0 && j>=0){
    //127
    //456
    //583
        int v1=a1[i];
        int v2=a2[j];
        int sum=v1+v2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
    //  7
    //456
    //463
        int sum=a1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--; 
    }
    while(j>=0){
    //127
    //  6
    //133
        int sum=a2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        j--;
    }
    while(carry!=0){
    //999
    //999
 //  1998
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);

    }
    int size=ans.size();
    reverse(ans,size);
}

int main(){
    vector<int> a1;
    vector<int> a2;
    int s1;
    cout<<"ENTER THE SIZE OF FIRST ARRAY : "<<endl;
    cin>>s1;
    int s2;
    cout<<"ENTER THE SIZE OF SECOND ARRAY : "<<endl;
    cin>>s2;
    user_input(a1,s1);
    cout<<"ENTERRED ELEMENTS IN FIRST ARRAY "<<endl;
    print(a1,s1);
    user_input(a2,s2);
    cout<<"ENTERRED ELEMENTS IN SECOND ARRAY "<<endl;
    print(a2,s2);
    cout<<"SUM OF TWO ARRAY IS "<<endl;
    SumOfArrays(a1,a2);
    return 0;
}