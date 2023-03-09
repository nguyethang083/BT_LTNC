#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void printTriplets(int arr[], int N) {
    for(int i = 0; i < N - 2; i++) {
        for(int j = i + 1; j < N - 1; j++) {
            for(int k = j + 1; k < N; k++) {
                if((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main() {
    srand(time(NULL));
    const int N = 10;
    int arr[N];
    for(int i = 0; i < N; i++) {
        arr[i] = rand() % 50;
        cout << arr[i] << " ";
    }
    cout << endl;
    printTriplets(arr, N);
    return 0;
}
