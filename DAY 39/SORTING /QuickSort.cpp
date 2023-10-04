#include <iostream>
using namespace std;
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
}

int pivotEle(int *arr, int s, int e)
{

    int pivot = arr[s];
    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    int i = s, j = e;
    swap(arr[pivotIndex], arr[s]);
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int p = pivotEle(arr, s, e);

    quickSort(arr, 0, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int size;
    cout << endl
         << endl;
    cout << "ENTER THE SIZE OF AN ARRAY " << endl;
    cin >> size;
    int *arr = new int[size];
    input(arr, size);
    cout << "ENTERRED ELEMENTS IN AN ARRAY " << endl;
    print(arr, size);
    cout << endl
         << endl;
    cout << "AFTER APPLYING QUICK SORT " << endl;
    quickSort(arr, 0, size - 1);
    print(arr, size);
    cout << endl
         << endl;

    return 0;
}