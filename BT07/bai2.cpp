#include <iostream>
using namespace std;

void printSize(int* arr, int size) {
    cout << "Size of array inside function: " << sizeof(arr) << endl;
    cout << "Number of elements inside function: " << size << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    
    cout << "Size of array outside function: " << sizeof(arr) << endl;
    cout << "Number of elements outside function: " << size << endl;
    
    printSize(arr, size);
    
    return 0;
}
