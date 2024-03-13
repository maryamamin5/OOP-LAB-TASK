#include <iostream>
#include <string>
using namespace std;

struct EMPLOYEE{
    string name;
    int communication;
    int teamwork;
    int problemsolving;
};

void display_data(EMPLOYEE emp[], int no_emp) {
	int i;
    cout << "Employee Data:" << endl;
    for (i=0; i<no_emp;i++) {
        cout << "employee " << i + 1 << ": " << emp[i].name;
        cout<<"\n";
        cout << "communication: " << emp[i].communication;
        cout<<"\n";
        cout << "teamwork:" << emp[i].teamwork << endl;
        cout<<"\n";
        cout << "problem solving: " << emp[i].problemsolving << endl;
    }
}

void change_ratings(EMPLOYEE &emp) {
    cout << "Enter updated communication rating for " << emp.name << ": ";
    cin >> emp.communication;

    cout << "Enter updated teamwork rating for " << emp.name << ": ";
    cin >> emp.teamwork;

    cout << "Enter updated problem-solving rating for " << emp.name << ": ";
    cin >> emp.problemsolving;
}

calc_average_rating(const EMPLOYEE &emp) {
    return (emp.communication + emp.teamwork + emp.problemsolving) / 3.0;
}

int main() {
    const int no_emp = 3; // no of employees
    EMPLOYEE emp[no_emp];
      int i;
   
    for (i = 0; i < no_emp; ++i) {
        cout << "enter details for employee " << i + 1 << " :\n" ;
        cout << "name: ";
        cin >> emp[i].name;
        cout << "communication rating: ";
        cin >> emp[i].communication;
        cout << "teamwork rating: ";
        cin >> emp[i].teamwork;
        cout << "problem solving rating: ";
        cin >> emp[i].problemsolving;
       
    }

   
    display_data(emp, no_emp);

   
    int index_emp;
    cout << "Enter the index of the employee to update ratings:"<< no_emp;
    cin >> index_emp;

    if (index_emp >= 1 && index_emp <= no_emp) {
        change_ratings(emp[no_emp - 1]);
    } else {
        cout << "Invalid input";
    }
    
    display_data(emp,no_emp);

    cout << "enter the index of the employee to calculate average rating from  (1 to 3) employee  " << no_emp <<" :" ;
    cin >>index_emp;

    if (index_emp >= 1 && index_emp <=no_emp ) {
      float averageratingemp = calc_average_rating(emp[index_emp - 1]);
        cout << "Average rating for " << emp[index_emp - 1].name << ": " << averageratingemp;
    } else {
        cout << "invalid input" << endl;
    }

    return 0;
}
