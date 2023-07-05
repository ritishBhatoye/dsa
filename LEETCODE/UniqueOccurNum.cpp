#include <iostream>
using namespace std;
void user_input(int arr[], int size)
{
    cout << "ENTER THE VALUE YOU WANT TO INSERT " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void print(int arr[], int size)
{
    cout << "ENTERRED VALUES : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void sort(int arr[], int size)
{   
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
bool unique_Num_Occ(int arr[], int size)
{   
    int ans[size];
    int a[size];
    size=sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    sort(arr, size);
    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans[i] += count;
        i = i + count;
    }
    size = sizeof(ans) / sizeof(ans[0]);
    sort(ans, size);
    for (int i = 0; i < size - 1; i++)
    {
        if (ans[i] == ans[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size;
    cout << "ENTER THE SIZE OF AN ARRAY " << endl;
    cin >> size;
    int a[20];
    user_input(a, size);
    print(a, size);
    unique_Num_Occ(a, size);
    return 0;
}