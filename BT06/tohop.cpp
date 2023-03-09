#include <iostream>
using namespace std;

void print_subset(int a[], int k) {
    for (int i = 0; i < k; i++) {
        cout << (char)('a' + a[i] - 1);
    }
    cout << endl;
}

void generate_subsets(int n, int k, int a[], int i) {
    if (k == 0) {
        print_subset(a, i);
    } else {
        for (int j = 1; j <= n; j++) {
            bool used = false;
            for (int l = 0; l < i; l++) {
                if (a[l] == j) {
                    used = true;
                    break;
                }
            }
            if (!used) {
                a[i] = j;
                generate_subsets(n, k - 1, a, i + 1);
            }
        }
    }
}

int main() {
    int n, k;
    cout << "Nhap N: ";
    cin >> n;
    cout << "Nhap K: ";
    cin >> k;

    int a[k];
    generate_subsets(n, k, a, 0);

    return 0;
}
