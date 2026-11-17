#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void displayPersonInfo()
    {
        cout<<"Name: "<< name<<", Age: "<<age<<endl;
    }
};
class Employee: public Person
{
public:
    int employeeId;
    double salary;

    void displayEmployeeInfo()
    {
        displayPersonInfo();
        cout<<"Employee ID: "<<employeeId<<", Salary: $"<<salary<<endl;
    }
};

int main()
{
    Employee emp;
    emp.name="Adib";
    emp.age=21;
    emp.employeeId=185;
    emp.salary=20000;

    emp.displayEmployeeInfo();
    return 0;
}


