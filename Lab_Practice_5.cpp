#include <iostream> 
#include <string> 
using namespace std; 
class Person 
{ 
    public: 
    string name; 
    int age; 
    void displayPersonInfo() 
    { 
        cout << "Name: " << name << ", Age: " << age << endl; 
    } 
}; 
class Employee : public Person 
{ 
    public: 
    int employeeId; 
    double salary; 
    void displayEmployeeInfo() 
    { 
        displayPersonInfo(); 
        cout << "Employee ID: " << employeeId << ", Salary: $" << salary << endl; 
    } 
}; 
int main() 
{ 
    Employee emp; 
    emp.name = "John"; 
    emp.age = 30; 
    emp.employeeId = 201; 
    emp.salary = 50000; 
    emp.displayEmployeeInfo();
     return 0; 
}