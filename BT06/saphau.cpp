#include <iostream>
#include <vector>

using namespace std;

void printSolution(vector<int> solution, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (solution[i] == j) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(vector<int> solution, int row, int col) {
    for (int i = 0; i < row; i++) {
        // check same column or diagonal
        if (solution[i] == col || abs(solution[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

void solveNQueens(vector<int>& solution, int row, int N) {
    if (row == N) { // solution found
        printSolution(solution, N);
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(solution, row, col)) { // check if it's safe to place queen here
            solution[row] = col;
            solveNQueens(solution, row + 1, N);
            solution[row] = -1; // backtrack
        }
    }
}

void nQueens(int N) {
    vector<int> solution(N, -1); // initialize solution vector with -1
    solveNQueens(solution, 0, N);
}

int main() {
    int N;
    cout << "Enter the number of queens (N): ";
    cin >> N;
    cout << endl;
    nQueens(N);
    return 0;
}
