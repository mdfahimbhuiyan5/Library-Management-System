#ifndef RESERVATION_H
#define RESERVATION_H

#include "Service.h"

// Forward declaration
class Customer;

using namespace std;

class Reservation {
private:
    int reservationID;
    Customer* customer;
    Service* service;

public:
    Reservation(int id, Customer* customer, Service* service);
    int getID() const;
    Service* getService() const;
};

#endif // RESERVATION_H
