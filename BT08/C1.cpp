#include <iostream>

using namespace std;

// Ham dao nguoc chuoi
void reverse(char a[]) {
    int n = strlen(a);
    char *p = a;
    char *q = a + n - 1;
    while (p < q) {
        swap(*p, *q);
        p++;
        q--;
    }
}

// Ham xoa ky tu trong chuoi
void delete_char(char a[], char c) {
    char *p = a;
    char *q = a;
    while (*q) {
        if (*q != c) {
            *p = *q;
            p++;
        }
        q++;
    }
    *p = '\0';
}

// Ham don phai
void pad_right(char a[], int n) {
    int len = strlen(a);
    if (n > len) {
        char *p = a + len;
        for (int i = 0; i < n - len; i++) {
            *p = ' ';
            p++;
        }
        *p = '\0';
    }
}

// Ham don trai
void pad_left(char a[], int n) {
    int len = strlen(a);
    if (n > len) {
        char *p = a + len;
        char *q = a + n - 1;
        while (p >= a) {
            *(q--) = *p;
            p--;
        }
        while (q >= a) {
            *(q--) = ' ';
        }
    }
}

// Ham cat chuoi
void truncate(char a[], int n) {
    int len = strlen(a);
    if (n < len) {
        *(a + n) = '\0';
    }
}

// Ham kiem tra chuoi doi xung
bool is_palindrome(char a[]) {
    int len = strlen(a);
    char *p = a;
    char *q = a + len - 1;
    while (p < q) {
        if (*p != *q) {
            return false;
        }
        p++;
        q--;
    }
    return true;
}

// Ham loc trai
void trim_left(char a[]) {
    char *p = a;
    while (*p == ' ') {
        p++;
    }
    int len = strlen(p);
    for (int i = 0; i <= len; i++) {
        *(a + i) = *(p + i);
    }
}

// Ham loc phai
void trim_right(char a[]) {
    int len = strlen(a);
    char *p = a + len - 1;
    while (*p == ' ' && p >= a) {
        p--;
    }
    *(p + 1) = '\0';
}

int main() {
    char a[100];
    cout << "Nhap vao xau: ";
    cin.getline(a, 100);

    // dao xau
    reverse(a);
    cout << "Xau dao nguoc: " << a << endl;

    // xoa ki tu
    char c;
    cout << "Nhap ki tu can xoa: ";
    cin >> c;
    delete_char(a, c);
    cout << "Xau sau khi xoa ki tu " << c << ": " << a << endl;

    // don phai
    int n;
    cout << "Nhap so luong ki tu can them vao phai: ";
    cin >> n;
    pad_right(a, n);
    cout << "Xau sau khi don phai: " << a << endl;

    // don trai
    cout << "Nhap so luong ki tu can them vao trai: ";
    cin >> n;
    pad_left(a, n);
    cout << "Xau sau khi don trai: " << a << endl;

    // cat xau
    cout << "Nhap so luong ki tu can cat: ";
    cin >> n;
    truncate(a, n);
    cout << "Xau sau khi cat: " << a << endl;

    // kiem tra doi xung
    if (is_palindrome(a)) {
        cout << "Xau doi xung\n";
    } else {
        cout << "Xau khong doi xung\n";
    }

    // loc trai
    trim_left(a);
    cout << "Xau sau khi loc trai: " << a << endl;

    // loc phai
    trim_right(a);
    cout << "Xau sau khi loc phai: " << a << endl;

    return 0;
}
