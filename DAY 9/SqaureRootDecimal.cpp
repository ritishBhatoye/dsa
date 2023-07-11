//FIND SQAURE ROOT USING BINARY SEARCH
#include<iostream>
using namespace std;
// void user_input(vector<int> &arr, int size)
// {
//     cout << "ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : " << endl;
//     int a;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> a;
//         arr.push_back(a);
//     }
// }
void print(vector<int> &arr, int sq)
{
    for (int i = 0; i < sq; i++)
    {   
        arr.push_back(i);
        cout << arr[i] << endl;
    }
}
double morePrecision(int n,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
long long int SquareRoot(vector<int> &arr,int sq){
    int s=0;
    int e=sq;
    long long int mid=s+(e-s)/2;
    long int ans=-1;
    while(s<=e){
    long long int square=mid*mid;
    if(square==sq){
     return mid;
    }
    else if(square<sq){
       ans=mid;
       s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }
return ans;
}
int main(){
    vector<int> arr;
    int sq;
    cout<<"ENTER THE NUMBER TO FIND SQUARE ROOT :- "<<endl;
    cin>>sq;
    // user_input(arr,sq);
    cout<<"SEARCH SPACE FOR ENETERRED NUMBER :- "<<endl;
    print(arr,sq);
    int temp=SquareRoot(arr,sq);
    cout<<"SQAURE ROOT OF "<<sq<<" = "<<morePrecision(sq,3,temp)<<endl;
    return 0;
}