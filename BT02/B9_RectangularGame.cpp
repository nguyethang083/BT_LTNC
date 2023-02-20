#include <iostream>
#include <climits>

using namespace std;

void rectangle_game() {
    int n;
    cin >> n;

    int min_a = INT_MAX - 1, min_b = INT_MAX - 1;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        min_a = min(min_a, a);
        min_b = min(min_b, b);
    }

    long long ans = (long long)min_a * min_b;

    cout << ans << endl;

}

int main() {
    rectangle_game();
    return 0;
}
