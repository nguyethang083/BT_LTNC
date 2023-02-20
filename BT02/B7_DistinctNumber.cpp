#include <iostream>

using namespace std;

void Distinct_Numbers() {
    int num;
    int prev_num = -1;

    while (true) {
        cin >> num;

        if (num < 0) {
            cout << num << endl;
            break;
        }

        if (num != prev_num) {
            cout << num << " ";
            prev_num = num;
        }
    }

}

int main() {
    Distinct_Numbers();
    return 0;
}