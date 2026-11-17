#include <iostream> 
#include <string> 
using namespace std; 
class Student 
{ 
    private: 
    int studentId; 
    string studentName; 
    double cgpa; 
    
    public: 
    void setStudentId(int studentId) 
    { 
        this->studentId = studentId; 
    } 
    void setStudentName(string studentName) 
    { 
        this->studentName = studentName; 
    } 
    void setCgpa(double cgpa) 
    { 
        this->cgpa = cgpa; 
    } 
    int getStudentId() 
    { 
        return studentId; 
    } 
    string getStudentName()
     { 
        return studentName; 
    } 
    double getCgpa() 
    { 
        return cgpa; 
    } 
}; 
int main() 
{ 
    Student s; 
    s.setStudentId(101); 
    s.setStudentName("Alice"); 
    s.setCgpa(3.85); 
     cout << "ID: " << s.getStudentId() << endl; 
     cout << "Name: " << s.getStudentName() << endl; 
     cout << "CGPA: " << s.getCgpa() << endl; 
     return 0;
}