#include <iostream>
using namespace std;

class Land {
public:
    string house_name;
    int number;
    string city;
    string state;
    double width;
    double height;
    int number_of_rooms;

    Land(string house_name, int number, string city, string state, double width, double height, int number_of_rooms){
        this->house_name=house_name;
        this->number=number;
        this->city=city;
        this->state=state;
        this->width=width;
        this->height=height;
        this->number_of_rooms=number_of_rooms;
    }

    void showdetails(){
        cout << "Name of house-" << house_name << endl;
        cout << "Number-" << number << endl;
        cout << "City-" << city << endl;
        cout << "State-" << state <<endl;
        cout << "Area of land-" << width*height << endl;
        cout << "Number of Rooms-" << number_of_rooms << endl;
    }
};

int main(){
    int person = 1;
    do{
        Land person();
    }
    while(  );
    return 0;
}