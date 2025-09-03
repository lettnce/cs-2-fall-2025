// class_basics_lab.h

#include <iostream>
#include <string>
using namespace std;

// ================================
// Part 1: Rectangle Class (Level 1)
// ================================
class Rectangle {
private:
    // TODO: Declare private attributes for length and width (use double)
    double length, width;
public:
    // TODO: Constructor to initialize length and width
    Rectangle(int l, int w) : length(l), width(w) {}
    // TODO: Method to return area
    double area() {return length * width;}
    // TODO: Method to return perimeter
    double perimeter() {return (2*length)+(2*width);}
    // TODO: Method to print rectangle details
    void print() {
        cout << "Area: " << area() << endl
             << "Perimeter: " << perimeter() << endl;
    };
    // TODO: Method to check if rectangle is a square
    bool isSquare() {
        if (length == width) {
            return true;
        }
        else {
            return false;
        }
    };
    // TODO: Method to scale the rectangle by a factor
    void scale(double f) {length*=f, width*=f;}
    // TODO: Getters and setters for length and width
    double getLength() const {return length;}
    double getWidth() const {return width;}
};


// =================================
// Part 2: Student Class (Level 2)
// =================================
class Student {
private:
    // TODO: Declare private attributes for name (string), gpa (double), major (string)
    string name, major;
    double gpa;
public:
    // TODO: Default constructor
    Student() : name("Ghost"), major("Unknown"), gpa(0.0) {} 
    // TODO: Parameterized constructor
    Student(string n, double g, string m) : name(n), gpa(g), major(m) {}
    // TODO: Method to print transcript
    void printTranscript() {
        cout << "Name: " << name << endl
             << "Major: " << major << endl
             << "GPA: " << gpa << endl;
    };
    // TODO: Method to check honors status
    bool checkHonors() {
        if (gpa >= 3.5) {
            return true;
        }
        else {
            return false;
        }
    };
    // TODO: Method to update GPA (with clamping between 0.0 and 4.0)
    void updateGPA(double pt) {
        gpa+=pt;
        if (gpa < 0.0 || gpa > 4.0) {gpa-=pt;}
    };
    // TODO: Method to change major
    void changeMajor(string new_m) {
        major=new_m;
    };
    // TODO: Method to compare GPA with another student and return name of higher GPA student
    // ASK: How to access data from a second object without needing another constructor
    double compareGPA(Student& otherStudent) {
        if (gpa > otherStudent.gpa) {
            return gpa;
        }
        else {
            return otherStudent.gpa;
        }
    }; 
};


// ===================================
// Part 3: Course Class (Level 3)
// ===================================
/*class Course {
private:
    // TODO: Declare private attributes: course name, enrollment count, static array of 30 student names
    string title;
    int count;
    string student_names[30];
public:
    // TODO: Constructor that sets course name and initializes enrollment to 0
    Course (string t) : title(t), count(0) {}
    // TODO: Method to add a student (if space allows)
    void addStudent() {};
    // TODO: Method to print course name and all enrolled students
    void printRoster() {}; 
    // TODO: Method to return enrollment count
    int enrollCount() {};
    // TODO: Method to check if a student is enrolled
    bool isEnrolled() {};
    // TODO: Method to drop a student by name
    void dropStudent() {};
    // TODO: Method to clear all enrolled students
    void clearRoster() {};
};*/
