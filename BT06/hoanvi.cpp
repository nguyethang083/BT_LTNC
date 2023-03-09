#include <iostream>
#include <string>
using namespace std;

void generatePermutations(string perm, int n, int k, int selected[]) {
    if (k == 0) {
        cout << perm << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (selected[i] == 0) {
            selected[i] = 1;
            perm += char('a' + i);
            generatePermutations(perm, n, k-1, selected);
            perm.pop_back();
            selected[i] = 0;
        }
    }
}

int main() {
    int n, k;
    cout << "Nhap N: ";
    cin >> n;
    cout << "Nhap K: ";
    cin >> k;

    if (n < k) {
        cout << "Khong the tao tu co do dai " << k << " voi pham vi " << n << " chu cai." << endl;
        return 0;
    }

    int selected[n] = {0};
    string perm = "";
    generatePermutations(perm, n, k, selected);

    return 0;
}
