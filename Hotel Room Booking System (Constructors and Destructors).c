#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    void displayBooking() {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << daysBooked << endl;
    }

    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    RoomBooking booking1("Alice Smith", 101, 3);
    booking1.displayBooking();

    return 0;
}
