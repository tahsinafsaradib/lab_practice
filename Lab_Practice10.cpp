#include <iostream> 
#include <string> 
using namespace std; 
class Person 
{ 
    private: 
    string name; 
    int age; 
    
    public: 
    void setName(string n) 
    { 
        name = n; 
    } 
    void setAge(int a) 
    { 
        age = a; 
    } 
    string getName() 
    { 
        return name; 
    } 
    int getAge() 
    { 
        return age; 
    } 
}; 
class Employee : public Person 
{ 
    private: 
    int employeeId; 
    double salary;

    public: 
    void setEmployeeId(int id) 
    { 
        employeeId = id; 
    } 
    void setSalary(double s) 
    { 
        salary = s; 
    } 
    int getEmployeeId() 
    { 
        return employeeId; 
    } 
    double getSalary() 
    { 
        return salary; 
    } 
    void displayAll() 
    { 
        cout << "Name: " << getName() << ", Age: " << getAge() << endl; 
        cout << "ID: " << getEmployeeId() << ", Salary: $" << getSalary() << endl; 
    } 
}; 
int main() 
{ 
    Employee emp; 
    emp.setName("David"); 
    emp.setAge(28); 
    emp.setEmployeeId(305); 
    emp.setSalary(65000); 
    emp.displayAll(); 
    return 0; 
}