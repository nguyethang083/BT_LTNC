#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void print_point_by_value(Point p) {
    cout << "In tham tri - Dia chi cua tham so la: " << &p << endl;
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

void print_point_by_reference(Point& p) {
    cout << "In tham chieu - Dia chi cua tham so la: " << &p << endl;
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point p = {3, 4};
    cout << "Dia chi cua p la: " << &p << endl;
    cout << "\nTruyen tham tri\n";
    print_point_by_value(p);
    cout << "\nTruyen tham chieu\n";
    print_point_by_reference(p);

    return 0;
}
