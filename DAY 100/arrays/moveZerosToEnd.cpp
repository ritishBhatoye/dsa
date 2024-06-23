#include<iostream>
using namespace std;

void inputArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* moveZeros(int n, int* arr) {
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    
    if(j == -1) return arr;

    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main() {
    int size;
    cout << endl << endl;
    cout << "ENTER THE SIZE OF AN ARRAY " << endl;
    cin >> size;
    int* arr = new int[size];
    cout << "ENTER THE ELEMENTS :- " << endl;
    inputArr(arr, size);
    cout << endl;
    cout << "ENTERED ELEMENTS :- " << endl;
    printArr(arr, size);
    cout << endl;

    int* arr1 = moveZeros(size, arr);

    printArr(arr1, size);

    cout << endl;
    delete[] arr;  // Free the allocated memory
    return 0;
}
