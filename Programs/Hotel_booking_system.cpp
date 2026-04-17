#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
using namespace std;

// ================= TEMPLATE FUNCTION =================
template <typename T>
T calculateTotal(T a, T b) {
    return a + b;
}

// ================= USER-DEFINED EXCEPTION =================
class RoomException {
public:
    void showError() {
        cout << "No rooms available!" << endl;
    }
};

// ================= SERVICE CLASS =================
class Service {
    string name;
    double cost;

public:
    Service(string n = "", double c = 0) {
        name = n;
        cost = c;
    }

    double getCost() {
        return cost;
    }

    void display() {
        cout << name << " : Rs." << cost << endl;
    }

    // Operator Overloading
    Service operator+(Service s) {
        return Service("Combined", cost + s.cost);
    }
};

// ================= ABSTRACT ROOM =================
class Room {
protected:
    int roomNumber;
    bool isOccupied;
    double price;

public:
    Room() {
        roomNumber = 0;
        price = 0;
        isOccupied = false;
    }

    Room(int num, double p) {
        roomNumber = num;
        price = p;
        isOccupied = false;
    }

    // Copy Constructor
    Room(const Room &r) {
        roomNumber = r.roomNumber;
        price = r.price;
        isOccupied = r.isOccupied;
    }

    virtual double calculatePrice(int days) = 0;

    void checkIn() {
        isOccupied = true;
    }

    void checkOut() {
        isOccupied = false;
    }

    bool getStatus() {
        return isOccupied;
    }

    // Inline function
    inline int getRoomNumber() {
        return roomNumber;
    }

    virtual void displayType() = 0;

    virtual ~Room() {}
};

// ================= DERIVED CLASSES =================
class SingleRoom : public Room {
public:
    SingleRoom(int num) : Room(num, 1000) {}

    double calculatePrice(int days) {
        return price * days;
    }

    void displayType() {
        cout << "Single";
    }
};

class DoubleRoom : public Room {
public:
    DoubleRoom(int num) : Room(num, 2000) {}

    double calculatePrice(int days) {
        return price * days;
    }

    void displayType() {
        cout << "Double";
    }
};

class DeluxeRoom : public Room {
public:
    DeluxeRoom(int num) : Room(num, 4000) {}

    double calculatePrice(int days) {
        return price * days * 1.2;
    }

    void displayType() {
        cout << "Deluxe";
    }
};

class SuiteRoom : public Room {
public:
    SuiteRoom(int num) : Room(num, 7000) {}

    double calculatePrice(int days) {
        return price * days * 1.5;
    }

    void displayType() {
        cout << "Suite";
    }
};

// ================= CUSTOMER =================
class Customer {
    string name;
    int id;

public:
    Customer(string n = "", int i = 0) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Customer: " << name << " | ID: " << id << endl;
    }
};

// ================= BOOKING =================
class Booking {
    Customer customer;
    Room* room;
    int days;
    list<Service> services;
    double totalBill;

public:
    Booking(Customer c, Room* r, int d) {
        customer = c;
        room = r;
        days = d;
        totalBill = 0;
    }

    void addService(Service s) {
        services.push_back(s);
    }

    // Method Overloading
    double calculateBill() {
        return calculateBill(0);
    }

    double calculateBill(double extraCharge) {
        double roomCost = room->calculatePrice(days);
        double serviceCost = 0;

        for (auto s : services) {
            serviceCost += s.getCost();
        }

        totalBill = calculateTotal(roomCost, serviceCost + extraCharge);
        return totalBill;
    }

    void displayBill() {
        customer.display();
        cout << "Room No: " << room->getRoomNumber() << endl;

        cout << "Room Type: ";
        room->displayType(); // polymorphism
        cout << endl;

        cout << "Services:\n";
        for (auto s : services) {
            s.display();
        }

        cout << "Total Bill: Rs." << totalBill << endl;
    }

    Room* getRoom() {
        return room;
    }

    // Friend Function
    friend void showBooking(Booking b);
};

// Friend function
void showBooking(Booking b) {
    cout << "Room booked: " << b.room->getRoomNumber() << endl;
}

// ================= HOTEL =================
class Hotel {
    vector<Room*> rooms;
    list<Booking> bookings;
    map<int, Room*> roomMap;

public:
    Hotel() {
        rooms.push_back(new SingleRoom(101));
        rooms.push_back(new DoubleRoom(102));
        rooms.push_back(new DeluxeRoom(103));
        rooms.push_back(new SuiteRoom(104));

        for (auto r : rooms) {
            roomMap[r->getRoomNumber()] = r;
        }
    }

    Room* findAvailableRoom() {
        auto it = find_if(rooms.begin(), rooms.end(), [](Room* r) {
            return !r->getStatus();
        });

        if (it == rooms.end()) {
            throw RoomException();
        }

        return *it;
    }

    void bookRoom() {
        string name;
        int id, days;

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter days: ";
        cin >> days;

        try {
            Room* r = findAvailableRoom();
            Customer c(name, id);

            Booking b(c, r, days);

            // Add sample services
            b.addService(Service("Food", 500));
            b.addService(Service("Laundry", 200));

            b.calculateBill();

            bookings.push_back(b);
            r->checkIn();

            showBooking(b);

        } catch (RoomException e) {
            e.showError();
        }
    }

    void checkOut() {
        int roomNo;
        cout << "Enter room number: ";
        cin >> roomNo;

        if (roomMap.find(roomNo) != roomMap.end()) {
            Room* r = roomMap[roomNo];
            r->checkOut();
            cout << "Checked out successfully!\n";
        } else {
            cout << "Invalid room number!\n";
        }
    }

    void showRooms() {
        for_each(rooms.begin(), rooms.end(), [](Room* r) {
            cout << "Room " << r->getRoomNumber() << " - ";
            r->displayType();
            cout << " - ";
            cout << (r->getStatus() ? "Occupied" : "Available") << endl;
        });

        int occupied = count_if(rooms.begin(), rooms.end(), [](Room* r) {
            return r->getStatus();
        });

        cout << "Total Occupied Rooms: " << occupied << endl;
    }

    ~Hotel() {
        for (auto r : rooms) {
            delete r;
        }
    }
};

// ================= MAIN =================
int main() {
    Hotel hotel;
    int choice;

    do {
        cout << "\n===== HOTEL SYSTEM =====\n";
        cout << "1. Book Room\n";
        cout << "2. Check Out\n";
        cout << "3. Show Rooms\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.bookRoom();
                break;
            case 2:
                hotel.checkOut();
                break;
            case 3:
                hotel.showRooms();
                break;
            case 4:
                cout << "Thank you!\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}