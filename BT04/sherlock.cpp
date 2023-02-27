#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    bool isA = false;
    for (int i=1; i<=t; i++) {
        int n;
        cin >> n;
        int arr[n], sum_left = 0, sum_right = 0;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<i; j++) {
                sum_left += arr[j];
            }
            for (int j=i+1; j<n; j++) {
                sum_right += arr[j];
            }
            if (sum_left == sum_right) {
                isA = true;
                break;
            }
            sum_left = 0;
            sum_right = 0;
        }
        if (isA) cout << "YES\n";
        else cout << "NO\n";
        isA = false;
    }
    return 0;
}