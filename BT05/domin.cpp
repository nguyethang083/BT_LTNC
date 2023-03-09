#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 10;

// Sinh ngẫu nhiên bản đồ mìn
void createBoard(bool board[][MAX_SIZE], int m, int n, int k) {
    srand(time(NULL));
    int count = 0;
    while (count < k) {
        int i = rand() % m;
        int j = rand() % n;
        if (!board[i][j]) {
            board[i][j] = true;
            count++;
        }
    }
}

// Tính số mìn xung quanh ô (i,j)
int countMines(bool board[][MAX_SIZE], int m, int n, int i, int j) {
    int count = 0;
    for (int x = max(0, i-1); x <= min(m-1, i+1); x++) {
        for (int y = max(0, j-1); y <= min(n-1, j+1); y++) {
            if (board[x][y]) {
                count++;
            }
        }
    }
    return count;
}

// In ra bản đồ hiện tại với các ô đã mở và số mìn xung quanh
void printBoard(bool board[][MAX_SIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j]) {
                printf("* ");
            } else {
                int count = countMines(board, m, n, i, j);
                printf("%d ", count);
            }
        }
        printf("\n");
    }
}

int main() {
    int m, n, k;
    bool board[MAX_SIZE][MAX_SIZE] = {false};

    // Nhập kích thước bản đồ và số lượng mìn
    printf("Nhap kich thuoc ban do m x n (m, n <= 10): ");
    scanf("%d %d", &m, &n);
    printf("Nhap so luong mi: ");
    scanf("%d", &k);

    // Sinh bản đồ mìn
    createBoard(board, m, n, k);

    // Bắt đầu ván chơi
    bool gameOver = false;
    while (!gameOver) {
        int x, y;
        printf("Nhap toa do x, y (0 <= x < %d, 0 <= y < %d): ", m, n);
        scanf("%d %d", &x, &y);
        if (board[x][y]) {
            printf("YOU'RE DEAD!\n");
            printBoard(board, m, n);
            gameOver = true;
        } else {
            board[x][y] = true;
            printBoard(board, m, n);
        }
    }

    return 0;
}
