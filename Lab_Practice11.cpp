#include <iostream> 
using namespace std; 
class Payment 
{ 
    public: 
    virtual void processPayment() = 0; 
    virtual ~Payment() {} 
}; 
class CreditCardPayment : public Payment 
{ 
    public:
     void processPayment() override 
     { 
        cout << "Processing Credit Card Payment..." << endl;
     } 
}; 
class MobileBankingPayment : public Payment 
{ 
    public: 
    void processPayment() override 
    { 
        cout << "Processing Mobile Banking Payment..." << endl; 
    } 
}; 
int main() 
{ 
    Payment* p = new CreditCardPayment(); 
    p->processPayment(); 
    delete p; 
    p = new MobileBankingPayment(); 
    p->processPayment(); 
    delete p; 
    return 0; 
}