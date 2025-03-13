#include <iostream>
#include "Customer.h"
#include "Reservation.h"

using namespace std;

Customer::Customer(const string& name, int id) : name(name), customerID(id) {}

void Customer::addReservation(Reservation* reservation) {
    reservations.push_back(reservation);
    cout << "Adding reservation for " << name << endl;
}

void Customer::showReservations() const {
    cout << "Reservations for: " << name << ":" << endl;
    for (const auto& reservation : reservations) {
        cout << "Reservation ID: " << reservation->getID()
             << ", Service: " << reservation->getService()->getType() << endl;
    }
}

string Customer::getName() const {
    return name;
}

int Customer::getID() const {
    return customerID;
}
