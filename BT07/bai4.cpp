#include <iostream>
using namespace std;

int binary_search(int* arr, int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target = 7;
    int index = binary_search(arr, size, target);
    if (index == -1) {
        cout << "Khong tim thay " << target << " trong mang" << endl;
    } else {
        cout << "Tim thay " << target << " tai vi tri " << index << endl;
    }
    
    target = 20;
    index = binary_search(arr, size, target);
    if (index == -1) {
        cout << "Khong tim thay " << target << " trong mang" << endl;
    } else {
        cout << "Tim thay " << target << " tai vi tri " << index << endl;
    }
    
    return 0;
}
