// main.cpp
#include "class_basics_lab.h"

int main() {
    // cout << "===== Testing Rectangle Class =====\n";
    // Rectangle r(4.0, 5.0);
    // r.print();
    // cout << "Is square? " << (r.isSquare() ? "Yes" : "No") << endl;
    // r.scale(2.0);
    // r.print();

    // cout << "\n===== Testing Student Class =====\n";
    // Student s1("Alice", 3.3, "Computer Science");
    // s1.printTranscript();
    // s1.updateGPA(0.1);
    // s1.printTranscript();
    // Student s2("Bob", 3.5, "Mathematics");
    // cout << "Higher GPA: " << s1.compareGPA(s2) << endl;

    cout << "\n===== Testing Course Class =====\n";
    Course cs2("CS2");
    cs2.addStudent("Alice");
    cs2.addStudent("Bob");
    cs2.printRoster();
    cout << "Is Bob enrolled? " << (cs2.isEnrolled("Bob") ? "Yes" : "No") << endl;
    cs2.dropStudent("Bob");
    cs2.printRoster();
    cs2.clearRoster();
    cs2.printRoster();

    return 0;
}
