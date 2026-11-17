#include <iostream> 
using namespace std; 
class Smartphone 
{ 
    public: 
    virtual void takeSelfie() = 0; 
    virtual void makeCall() = 0; 
    virtual ~Smartphone() {} 
}; 
class Android : public Smartphone 
{ 
    public: 
    void takeSelfie() override 
    { 
        cout << "Android: Taking selfie..." << endl;
    } 
    void makeCall() override 
    { 
        cout << "Android: Making a call..." << endl; 
    } 
}; 
class IPhone : public Smartphone 
{ 
    public: 
    void takeSelfie() override 
    { 
        cout << "iPhone: Taking selfie..." << endl;
    } 
    void makeCall() override 
    { 
        cout << "iPhone: Making a call..." << endl;
     } 
}; 
int main() 
{ 
    Smartphone* phone1 = new Android(); 
    phone1->takeSelfie(); 
    phone1->makeCall(); 
    delete phone1; 
    Smartphone* phone2 = new IPhone(); 
    phone2->takeSelfie(); 
    phone2->makeCall(); 
    delete phone2; 
    return 0; 
}