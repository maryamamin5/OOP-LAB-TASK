#include <iostream>
#include <string>
using namespace std;

class STUDENT {
public:
    string name;
    static int total_student;
    int size = 3;
    string course[3];
    string std_id;
    
    STUDENT(): std_id(to_string(total_student++)) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << std_id << endl;
        cout << "Number of courses: " << size << endl;
        cout << "Courses: ";
        for (int i = 0; i < size; i++) {
            cout << course[i] << " ";
        }
        cout << endl;
    }

    static int getTotalStudents() {
        return total_student;
    }
};

int STUDENT::total_student = 1; // Initialize outside the class definition

int main() {
    STUDENT student1;
    student1.displayInfo();
    student1.name = "ali";
    student1.course[0] = "ENG";
    student1.course[1] = "URDU";
    student1.course[2] = "MATHS";
    cout << "DATA of student1" << endl;
    student1.displayInfo();

    STUDENT student2;
    student2.displayInfo();
    student2.name = "AHMAD";
    student2.course[0] = "calculus";
    student2.course[1] = "oop";
    student2.course[2] = "pf";
    cout << "DATA of student2" << endl;
    student2.displayInfo();
    cout << "TOTAL NO OF STUDENTS ARE " << STUDENT::getTotalStudents() << endl;

    return 0;
}
