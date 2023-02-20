#include <iostream>
using namespace std;

bool isPrime1(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;

}

bool isPrime2(int n) {
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Using concept of prime number can be represented in form of
    // (6*n + 1) or (6*n - 1) hence we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than the multiple of 6.

    /*
       1. Here i is of the form 5 + 6K where K >= 0
       2. i+1, i+3, i+5 are even numbers (6 + 6K). N is not an even number
       3. Because N%2 and N%3 checks are done in the before step
       4. Hence i+1, i+3, i+5 can't be N's divisors.
       5. i+4 is 9 + 6K which is a 3 multiple.
       6. N is not a 3 multiple hence i+4 can't be it's divisor
       Hence we only check if N is a divisor of i or i+2.
    */
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main() {
    int n; cin >> n;
    if(isPrime1(n)) {
        cout << "Yes";
    } else cout << "No";
    return 0;
}