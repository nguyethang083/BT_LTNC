#include <iostream>
using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count_first = count_even(arr, 5);
    int count_last = count_even(arr + size - 5, 5);

    cout << "Number of even elements in the first 5 elements: " << count_first << endl;
    cout << "Number of even elements in the last 5 elements: " << count_last << endl;

    return 0;
}
