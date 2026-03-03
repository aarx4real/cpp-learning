#include <iostream>
using namespace std;

class Triangle {
public:
    double base;
    double height;

    double Area(double base,double height){
        double area = 0.5 * base * height;
        return area;
    }
};

int main() {
    Triangle t1;
    double x,y;
    cout << "Base-" << endl;
    cin >> x;
    cout << "Height-" << endl;
    cin >> y;
    cout << t1.Area(x,y);
}