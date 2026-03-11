#include <iostream>
using namespace std;

class Rectangle {
    private:
        double lenght;
        double breath;
    public:
        void getdim(){
            cout << "Lenght-";
            cin >> lenght;
            cout << "Breath-";
            cin >> breath;
        }

        double area(){
            return lenght*breath;
        }

        void showarea(){
            cout << "Area-" << area();
        }
};

int main() {
    Rectangle r1;
    r1.getdim();
    r1.showarea();
    return 0;
}