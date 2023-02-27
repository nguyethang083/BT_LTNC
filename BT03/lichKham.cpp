#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end) {
 
    if (start >= end)
        return;
 
    int p = partition(arr, start, end);
 
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {
    
    int patientNumber;
    cin >> patientNumber;
    int list[patientNumber];
    for (int i = 0; i < patientNumber; i++) {
        cin >> list[i];
    }

    quickSort(list, 0, patientNumber-1);

    int sum = 0;
    int sumList[patientNumber];
    
    for (int i = 0; i < patientNumber; i++) {
        if (i==0){
            sumList[i] = 0;
        } else {
            sum += list[i-1];
            sumList[i] = sum;
        }
    }

    for (int i = 0; i < patientNumber; i++) {
        cout << list[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < patientNumber; i++) {
        cout << sumList[i] << " ";
    }
    
    int waitingTime = 0;
    for (int i = 0; i < patientNumber; i++) {
        waitingTime += sumList[i];
    }

    cout << endl << waitingTime;

    return 0;
}