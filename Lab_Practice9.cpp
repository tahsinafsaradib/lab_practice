#include <iostream> 
using namespace std; 
class Vehicle 
{ 
    public: 
    void vehicleInfo() 
    { 
        cout << "Vehicle Info" << endl; 
    } 
}; 
class Fare 
{ 
    public: 
    void fareInfo()
    { 
        cout << "Fare Details" << endl; 
    } 
}; 
class Car : public Vehicle 
{ 
    public: 
    void carInfo() 
    { 
        cout << "Car specific info" << endl; 
    } 
}; 
class Bus : public Vehicle, public Fare 
{ 
    public: void busInfo() 
    { 
        cout << "Bus specific info" << endl;
    } 
}; 
int main() 
{ 
    Car myCar;
    myCar.vehicleInfo(); 
    myCar.carInfo(); 
    Bus myBus; 
    myBus.vehicleInfo(); 
    myBus.fareInfo(); 
    myBus.busInfo(); 
    return 0; 
}