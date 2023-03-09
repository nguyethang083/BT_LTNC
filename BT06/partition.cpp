#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void partition(int n, vector<int> &v, int sum) {
    if (sum == n) {
        print(v);
        return;
    }
    for (int i = 1; i <= n - sum; i++) {
        v.push_back(i);
        partition(n, v, sum + i);
        v.pop_back();
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    partition(n, v, 0);
    return 0;
}
