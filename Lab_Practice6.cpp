#include <iostream> 
using namespace std; 
class LandVehicle 
{ 
    public: 
    void landInfo() 
    { 
        cout << "Drives on land." << endl; 
    } 
}; 
class WaterVehicle 
{ 
    public: 
    void waterInfo() 
    { 
        cout << "Floats on water." << endl; 
    } 
}; 
class AmphibiousVehicle : public LandVehicle, public WaterVehicle 
{ 
    public: void displayVehicleType() 
    { 
        cout << "I am an Amphibious Vehicle!" << endl;
    } 
}; 
int main() 
{ 
    AmphibiousVehicle av; 
    av.displayVehicleType(); 
    av.landInfo(); 
    av.waterInfo(); 
    return 0; 
}