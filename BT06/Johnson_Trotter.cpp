#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_permutations(const vector<int>& p) {
    for (int i = 0; i < p.size(); i++) {
        cout << p[i];
    }
    cout << endl;
}

void johnson_trotter(int n) {
    vector<int> p(n), pi(n), dir(n, -1);

    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
        pi[i] = i;
    }

    print_permutations(p);

    while (true) {
        int mobile = -1;
        for (int i = 0; i < n; i++) {
            if ((dir[i] == -1 && i > 0 && p[i] > p[i - 1]) ||
                (dir[i] == 1 && i < n - 1 && p[i] > p[i + 1])) {
                if (mobile == -1 || p[i] > p[mobile]) {
                    mobile = i;
                }
            }
        }

        if (mobile == -1) {
            break;
        }

        int swap_with;
        if (dir[mobile] == -1) {
            swap_with = pi[mobile] - 1;
        } else {
            swap_with = pi[mobile] + 1;
        }

        swap(p[mobile], p[swap_with]);
        swap(pi[mobile], pi[swap_with]);

        for (int i = 0; i < n; i++) {
            if (p[i] > p[swap_with]) {
                dir[i] *= -1;
            }
        }

        print_permutations(p);
    }
}

int main() {
    int n;
    cin >> n;

    johnson_trotter(n);

    return 0;
}
