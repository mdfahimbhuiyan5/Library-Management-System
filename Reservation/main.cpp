//
// Created by Kerem on 16/11/2024.
//
#include <iostream>
#include "Reservation.h"
#include "Customer.h"
#include "Service.h"

using namespace std;

int main() {
    Customer customer1("Kerem Ozcan", 1634);

    Service service1("Hotel Room", 1500, 3);

    Reservation reservation1 (1, &customer1, &service1);

    customer1.addReservation(&reservation1);

    if ( service1.book()) {
        cout << service1.getType() <<"Booking successful" << endl;
    }else {
        cout << "Booking failed" << endl;
    }
    customer1.showReservations();

    return 0;
}