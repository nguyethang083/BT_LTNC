#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void print_point(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point p = {3, 4};
    print_point(p);

    return 0;
}
