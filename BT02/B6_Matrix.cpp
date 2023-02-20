#include <iostream>
using namespace std;

void printMatrix (int n) {
	int num = 0;
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= n; i++) {
			num++;
			cout << num << ' ';  
			if (num == n) num = 0; 
		}
		num++;
		cout << endl;
	}
}

int main() {
    int n; cin >> n;
    printMatrix(n);
    return 0;
}