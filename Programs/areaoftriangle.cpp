#include <iostream>
using namespace std;

class Triangle {
public:
    double base;
    double height;

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t1;
    cout << "Base-" << endl;
    cin >> t1.base;
    cout << "Height-" << endl;
    cin >> t1.height;
    cout << t1.area();
}