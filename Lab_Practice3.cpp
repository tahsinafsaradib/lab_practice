#include <iostream> 
using namespace std; 
class Shape 
{ 
    protected: 
    double dimension; 
    
    public: 
    void setDimension(double d) 
    { 
        dimension = d; 
    } 
    virtual double calculateArea() = 0; 
}; 
class Square : public Shape 
{ 
    public: 
    double calculateArea() override 
    { 
        return dimension * dimension; 
    } 
}; 
class Circle : public Shape 
{ 
    public: double calculateArea() override
     { 
        return 3.1416 * dimension * dimension; 
    } 
}; 
int main() 
{ 
    Square sq; 
    sq.setDimension(4.0); 
    cout << "Square Area: " << sq.calculateArea() << endl; 
    Circle c; 
    c.setDimension(3.0); 
    cout << "Circle Area: " << c.calculateArea() << endl; 
    return 0; 
}