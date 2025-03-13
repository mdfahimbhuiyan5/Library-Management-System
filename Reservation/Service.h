#ifndef SERVICE_H
#define SERVICE_H

#include <string>

using namespace std;

class Service {
private:
    string serviceType;
    double servicePrice;
    int availability;

public:
    Service(const string &type, double price, int availability);
    bool isAvailable() const;
    bool book();
    string getType() const;
    double getPrice() const;
    int getAvailability() const;
};

#endif // SERVICE_H
