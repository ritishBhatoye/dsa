#include <iostream>
using namespace std;

int getLength(char name[])
{
    int ans = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        ans++;
    }
    return ans;
}
void reverse(char name[])
{
    int s = 0;
    int e = getLength(name) - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }

    cout << name << endl;
}
// bool check(char name[]){
//     if(name==reverse(name)){
//         return true;
//     }
//     return false;
// }
bool check(char name[])
{
    int s = 0;
    int e = getLength(name) - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    cout << "ENTER YOUR NAME :- " << endl;
    cin >> name;
    cout << "YOUR NAME :- " << name << endl;
    cout << name << endl;
    cout << "LENGTH OF STRING " << getLength(name) << endl;
    int n = getLength(name);
    if (check(name))
    {
        cout << "YES!!!! STRING IS PALIDROME " << endl;
    }
    else
    {
        cout << "STRING IS NOT PALIDROME " << endl;
    }
    return 0;
}