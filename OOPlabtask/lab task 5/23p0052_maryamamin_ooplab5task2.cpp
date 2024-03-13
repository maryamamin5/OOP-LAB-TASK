#include<iostream>
#include<string>
using namespace std;

class CompanyEmp {
public:
    string unique_id;
    string name;
    string job_title;
    int no_hours; // hours per week

    void get_data(string id, string n, string title, int hrs) {
        unique_id = id;
        name = n;
        job_title = title;
        no_hours = hrs;
    }

    void show_data() {
        cout << "Enter unique id: ";
        cin >> unique_id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter job title: ";
        cin >> job_title;
        cout << "Enter number of hours per week: ";
        cin >> no_hours;
    }

    void calc_salary() {
        int base_hours = 40;
        int hourly_rate, overtime_rate, overtime_hours;

        cout << "Enter hourly rate: ";
        cin >> hourly_rate;

        cout << "Enter overtime hours: ";
        cin >> overtime_hours;

        overtime_rate = 2; // Overtime pay rate

        int salary, overtime_pay;

        if (no_hours <= base_hours) {
            salary = no_hours * hourly_rate;
            overtime_pay = 0;
        } else {
            salary = base_hours * hourly_rate;

            if (overtime_hours > base_hours ) {
                overtime_pay = overtime_hours * overtime_rate * hourly_rate;
            } else {
                overtime_pay = 0;
            }
        }

        int double_salary = salary + overtime_pay;

        cout << "The name of employe is: " << name << endl;
        cout << "The pay of employe: " << salary << endl;
        cout << "The overtime pay of employee: " << overtime_pay << endl;
        cout << "total salary of employee: " << double_salary << endl;
    }
};

int main() {
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;

    CompanyEmp employees[size];

    for (int i = 0; i < size; ++i) {
        cout << "\nEnter details for company's employee " << i + 1 << endl;
        employees[i].show_data();
        employees[i].calc_salary();
    }

    return 0;
}
