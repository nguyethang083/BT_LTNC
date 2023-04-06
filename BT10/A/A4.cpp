#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p = {1, 2};

    cout << "Dia chi bien p: " << &p << endl;
    cout << "Dia chi bien p.x: " << &(p.x) << endl;
    cout << "Dia chi bien p.y: " << &(p.y) << endl;

    return 0;
}

// NX: Địa chỉ của biến kiểu Point và trường x của nó giống nhau, 
// tức là đều trỏ tới vùng nhớ bắt đầu của biến.
// Địa chỉ của trường y của biến kiểu Point khác với địa chỉ của 
// biến kiểu Point và trường x của nó, tức là trường 
// y được lưu trữ ở vị trí khác trong bộ nhớ so với biến kiểu Point và trường x của nó.
// Điều này cho thấy rằng trường x và trường y của biến kiểu Point được lưu trữ tách biệt 
// trong bộ nhớ và có vị trí khác nhau trong bộ nhớ.