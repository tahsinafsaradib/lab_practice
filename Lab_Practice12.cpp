#include <iostream> 
#include <string> 
using namespace std; 
class Course 
{ 
    private: 
    int courseId; 
    string courseName; 
    
    public: 
    void setCourseId(int id) 
    { 
        courseId = id; 
    } 
    void setCourseName(string name) 
    { 
        courseName = name; 
    } 
    int getCourseId() 
    { 
        return courseId; 
    } 
    string getCourseName() 
    { 
        return courseName; 
    } 
    virtual void displayCourseType() = 0;
     virtual ~Course() {} 
}; 
class TheoryCourse : public Course 
{ 
    public: 
    void displayCourseType() override 
    { 
        cout << "This is a Theory Course" << endl; 
    } 
}; 
class LabCourse : public Course 
{ 
    public: 
    void displayCourseType() override 
    { 
        cout << "This is a Lab Course" << endl; 
    } 
}; 
int main() 
{ 
    Course* ptr = nullptr;  
    ptr = new TheoryCourse(); 
    ptr->setCourseId(101); 
    ptr->setCourseName("Data Structures"); 
    cout << "ID: " << ptr->getCourseId() << ", Name: " << ptr->getCourseName() << endl; 
    ptr->displayCourseType(); 
    delete ptr; 

    cout << "--------------------------------" << endl;  
    ptr = new LabCourse(); 
    ptr->setCourseId(102); 
    ptr->setCourseName("Data Structures Lab"); 
    cout << "ID: " << ptr->getCourseId() << ", Name: " << ptr->getCourseName() << endl; 
    ptr->displayCourseType(); 
    delete ptr; 
    return 0; 
}