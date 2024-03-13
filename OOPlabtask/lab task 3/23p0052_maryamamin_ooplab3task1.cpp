#include<iostream>
using namespace std;

int floorno = 4;
int noofroom = 5;
int eliteclass = 10000;
int economyclass = 6000;
char rooms[4][5] = {{'-', '-', '-', '-', '-'},
                    {'-', '-', '-', '-', '-'},
                    {'-', '-', '-', '-', '-'},
                    {'-', '-', '-', '-', '-'}};

void displayroom() {
    cout << "Current room status:\n";

    for (int i = 0; i < floorno; ++i) {
        for (int j = 0; j < noofroom; ++j) {
            cout << rooms[i][j] << " ";
        }
        cout << endl;
    }
}

void roombooking() {
    int floor, room, days;

    cout << "Enter the floor number (1-4): ";
    cin >> floor;

    if (floor < 1 || floor > floorno) {
        cout << "Invalid floor number. Please enter a number between (1 and 4).\n";
        return;
    }

    cout << "Enter the room number (1-5): ";
    cin >> room;

    if (room < 1 || room > noofroom) {
        cout << "Invalid room number. Please enter a number between 1 and " << noofroom << ".\n";
        return;
    }

    cout << "Enter the number of days: ";
    cin >> days;

    if (rooms[floor - 1][room - 1] == '-') {
        char typeofroom = (floor <= 2) ? 'economy' : 'elite';

        rooms[floor - 1][room - 1] = '*';

        int expense = (typeofroom == 'economy') ? (days * economyclass) : (days * eliteclass);

        cout << "Room booked successfully!\n";
        cout << "Total cost for " << days << " days: " << expense << " RS\n";
    } else {
        cout << "Room is already booked. Please choose another room.\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\nHotel Room Booking System\n";
        cout << "1. Book a Room\n";
        cout << "2. Show Available Rooms\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                roombooking();
                break;
            case 2:
                displayroom();
                break;
            case 3:
                cout << "Exiting the program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }
    } while (choice != 3);

    return 0;
}
