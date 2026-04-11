#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

using namespace std;

// ================= Exception =================
class BookingException : public runtime_error {
public:
    BookingException(const string& msg) : runtime_error("Booking Error: " + msg) {}
};

// ================= Base Class =================
class Room {
protected:
    int roomNumber;
    double basePrice;
    bool isOccupied;
    string guestName;

public:
    Room(int no, double price)
        : roomNumber(no), basePrice(price), isOccupied(false), guestName("N/A") {}

    virtual ~Room() {}

    int getRoomNo() const { return roomNumber; }
    bool getStatus() const { return isOccupied; }
    string getGuest() const { return guestName; }

    virtual string getRoomType() const = 0;
    virtual double calculateBill(int days) = 0;

    void checkIn(const string& name) {
        if (isOccupied) throw BookingException("Room already occupied!");
        guestName = name;
        isOccupied = true;
    }

    void checkOut() {
        guestName = "N/A";
        isOccupied = false;
    }
};

// ================= Room Types =================
class SingleRoom : public Room {
public:
    SingleRoom(int no) : Room(no, 1000) {}
    string getRoomType() const override { return "Single"; }
    double calculateBill(int days) override { return basePrice * days; }
};

class DoubleRoom : public Room {
public:
    DoubleRoom(int no) : Room(no, 1800) {}
    string getRoomType() const override { return "Double"; }
    double calculateBill(int days) override { return basePrice * days * 1.05; }
};

class DeluxeRoom : public Room {
public:
    DeluxeRoom(int no) : Room(no, 3500) {}
    string getRoomType() const override { return "Deluxe"; }
    double calculateBill(int days) override { return basePrice * days + 500; }
};

class SuiteRoom : public Room {
public:
    SuiteRoom(int no) : Room(no, 7000) {}
    string getRoomType() const override { return "Suite"; }
    double calculateBill(int days) override { return basePrice * days * 1.15; }
};

// ================= Hotel Manager =================
template <typename T>
class HotelManager {
private:
    vector<shared_ptr<T>> rooms;

    // Service pricing
    map<string, double> servicePrices = {
        {"Food", 300},
        {"Laundry", 150},
        {"Spa", 800},
        {"Cleaning", 200}
    };

    map<int, vector<string>> roomServices;

public:
    void addRoom(shared_ptr<T> room) {
        rooms.push_back(room);
    }

    shared_ptr<T> findRoom(int roomNo) {
        auto it = find_if(rooms.begin(), rooms.end(),
                          [roomNo](const shared_ptr<T>& r) {
                              return r->getRoomNo() == roomNo;
                          });

        if (it == rooms.end()) throw BookingException("Room not found!");
        return *it;
    }

    void addService(int roomNo, const string& service) {
        auto room = findRoom(roomNo);

        if (!room->getStatus())
            throw BookingException("Room is not occupied!");

        if (servicePrices.find(service) == servicePrices.end())
            throw BookingException("Invalid service!");

        roomServices[roomNo].push_back(service);
    }

    void displayServices() {
        cout << "\nAvailable Services:\n";
        for (auto& s : servicePrices)
            cout << s.first << " - ₹" << s.second << endl;
    }

    void displayOccupancy() {
        cout << "\n--- Occupancy Report ---\n";
        cout << left << setw(10) << "Room #" << setw(12) << "Type" << "Status\n";

        for (auto& room : rooms) {
            cout << setw(10) << room->getRoomNo()
                 << setw(12) << room->getRoomType()
                 << (room->getStatus() ? "Occupied (" + room->getGuest() + ")" : "Available")
                 << endl;
        }
    }

    void generateBill(int roomNo, int days) {
        auto room = findRoom(roomNo);

        if (!room->getStatus())
            throw BookingException("Room not occupied!");

        double total = 0;

        cout << "\n===== FINAL BILL =====\n";
        cout << "Room No: " << roomNo << endl;
        cout << "Guest: " << room->getGuest() << endl;

        double roomCharge = room->calculateBill(days);
        cout << "Room Charges: ₹" << roomCharge << endl;
        total += roomCharge;

        cout << "\nServices:\n";
        for (auto& s : roomServices[roomNo]) {
            double price = servicePrices[s];
            cout << s << " - ₹" << price << endl;
            total += price;
        }

        cout << "\nTOTAL: ₹" << total << endl;
        cout << "======================\n";

        room->checkOut();
        roomServices[roomNo].clear();
    }
};

// ================= MAIN =================
int main() {
    HotelManager<Room> hotel;

    hotel.addRoom(make_shared<SingleRoom>(101));
    hotel.addRoom(make_shared<DoubleRoom>(201));
    hotel.addRoom(make_shared<DeluxeRoom>(301));
    hotel.addRoom(make_shared<SuiteRoom>(401));

    int choice;

    do {
        cout << "\n1.Check-In\n2.Add Service\n3.Check-Out\n4.Report\n5.Services\n6.Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        try {
            if (choice == 1) {
                int r;
                string name;

                cout << "Enter Room No: ";
                cin >> r;
                cin.ignore();

                cout << "Enter Full Name: ";
                getline(cin, name);

                hotel.findRoom(r)->checkIn(name);
                cout << "Check-in successful!\n";
            }

            else if (choice == 2) {
                int r;
                string service;

                cout << "Enter Room No: ";
                cin >> r;
                cin.ignore();

                cout << "Enter Service: ";
                getline(cin, service);

                hotel.addService(r, service);
                cout << "Service added!\n";
            }

            else if (choice == 3) {
                int r, days;

                cout << "Enter Room No: ";
                cin >> r;
                cout << "Enter Days: ";
                cin >> days;

                hotel.generateBill(r, days);
            }

            else if (choice == 4) {
                hotel.displayOccupancy();
            }

            else if (choice == 5) {
                hotel.displayServices();
            }

        } catch (exception& e) {
            cout << e.what() << endl;
        }

    } while (choice != 6);

    return 0;
}