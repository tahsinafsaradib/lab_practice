#include <iostream> 
#include <string> 
using namespace std; 
class University 
{ 
    public: 
    void universityInfo() 
    { 
        cout << "University: Tech University" << endl; 
    } 
}; 
class Department : public University 
{ 
    public: 
    void departmentInfo()
    { 
        cout << "Department: Computer Science" << endl; 
    } 
}; 
class Student : public Department 
{ 
    public: 
    int id = 1001; 
    string name = "Charlie"; 
    void studentInfo() 
    { 
        cout << "Student ID: " << id << ", Name: " << name << endl; 
    } 
}; 
int main() 
{ 
    Student st; 
    st.universityInfo(); 
    st.departmentInfo(); 
    st.studentInfo(); 
    return 0; 
}