# Online Reservation and Management System

This project implements an **Object-Oriented Online Reservation and Management System** in C++. It demonstrates core OOP principles like encapsulation, inheritance, and polymorphism by managing customers, services, and reservations.

## **Overview**
The system allows users to:
- Add customers and manage their reservations.
- Create and manage various services (e.g., hotel rooms, flights, etc.).
- Make and track reservations between customers and services.

### **Features**
1. **Customer Management**:
   - Create customers with unique IDs and names.
   - Add and display customer reservations.

2. **Service Management**:
   - Define services with attributes like type, price, and availability.
   - Check and update service availability during booking.

3. **Reservation Management**:
   - Link customers to services via reservations.
   - Track reservation details such as reservation ID and associated service.

## **Code Structure**
- **`Customer.h` / `Customer.cpp`**:
  Handles customer details and their reservations.
- **`Service.h` / `Service.cpp`**:
  Defines available services and booking functionalities.
- **`Reservation.h` / `Reservation.cpp`**:
  Links customers to services, storing reservation details.
- **`main.cpp`**:
  Demonstrates the system in action with example objects and operations.

