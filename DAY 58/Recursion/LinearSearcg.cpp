#include <iostream>
using namespace std;

bool Ls(int *arr, int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}
void input(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool LS_Rec(int *arr, int size, int x)
{
if(size==0){
    return false;
}
if(arr[0]==x){
    return true;
}
else{
    return LS_Rec(arr+1,size-1,x);
    }
}
int main()
{
    int size;
    cout << endl
         << endl;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> size;
    int arr[size];
    input(arr, size);
    cout << "ENTERED ELEMENTS IN AN ARRAY : ";
    print(arr, size);
    int x;
    cout << "ENTER THE ELEMENT YOU WANT TO SEARCH : ";
    cin >> x;
    if (LS_Rec(arr, size, x))
    {
        cout << "ELEMENT " << x << " IS PRESENT " << endl;
    }
    else
    {
        cout << "ELEMENT " << x << " IS NOT PRESENT " << endl;
    }
    cout << endl
         << endl;
    return 0;
}