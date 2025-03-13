#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>

// Forward declaration
class Reservation;

using namespace std;

class Customer {
private:
    string name;
    int customerID;
    vector<Reservation*> reservations;

public:
    Customer(const string& name, int id);
    void addReservation(Reservation* reservation);
    void showReservations() const;
    string getName() const;
    int getID() const;
};

#endif
