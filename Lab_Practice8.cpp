#include <iostream> 
#include <string> 
using namespace std; 
class Vehicle 
{ 
    public: 
    void displayVehicleInfo() 
    { 
        cout << "Generic Vehicle Information" << endl; 
    } 
}; 
class Car : public Vehicle 
{ 
    public: 
    string brand = "Toyota";
    int doors = 4; 
    void carInfo() 
    { 
        cout << "Car Brand: " << brand << ", Doors: " << doors << endl; 
    } 
}; 
class Bus : public Vehicle 
{ 
    public: int routeNumber = 11; 
    int capacity = 50; 
    void busInfo() 
    { 
        cout << "Bus Route: " << routeNumber << ", Capacity: " << capacity << endl; 
    } 
}; 
int main() 
{ 
    Car c; 
    c.displayVehicleInfo(); 
    c.carInfo(); 
    Bus b; 
    b.displayVehicleInfo(); 
    b.busInfo(); 
    return 0; 
}