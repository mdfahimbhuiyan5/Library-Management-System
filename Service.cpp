#include "Service.h"

using namespace std;

Service::Service(const string &type, double price, int availability)
    : serviceType(type), servicePrice(price), availability(availability) {}

bool Service::isAvailable() const {
    return availability > 0;
}

bool Service::book() {
    if (availability > 0) {
        availability--;
        return true;
    }
    return false;
}

string Service::getType() const {
    return serviceType;
}

double Service::getPrice() const {
    return servicePrice;
}

int Service::getAvailability() const {
    return availability;
}
