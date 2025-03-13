#include "Reservation.h"

Reservation::Reservation(const int id, Customer* customer, Service* service)
    : reservationID(id), customer(customer), service(service) {}

int Reservation::getID() const {
    return reservationID;
}

Service* Reservation::getService() const {
    return service;
}
