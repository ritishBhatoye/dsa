#include <iostream>
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
void sort(vector<int> &arr, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] >= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    print(arr, size);
}
int BinarySearch(vector<int> &arr, int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr;
    int size;
    cout << "ENTER THE SIZE OF ARRAY " << endl;
    cin >> size;
    user_input(arr, size);
    cout << "ENTERRED ELEMENTS IN AN ARRAY : " << endl;
    print(arr, size);
    cout << "AFTER SORTING ARRAY " << endl;
    sort(arr, size);
    int key;
    cout << "ENTER THE ELEMENT YOU WANT TO SEARCH " << endl;
    cin >> key;
    cout << "*****STARTING BINARY SEARCH****** " << endl;
    int index = BinarySearch(arr, size, key);
    cout << key << " IS PRESENT AT " << index << " POSITION" << endl;
    return 0;
}