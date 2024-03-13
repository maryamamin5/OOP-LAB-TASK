#include<iostream>
using namespace std;

int main() {
    int chocolate = 20;
    char explore;

    cout << "Welcome to the horror mansion! You have choices to make to escape.\n";
    cout << "To go outside, you must give chocolate to the ghost.\n";

    while (chocolate > 0) {
        cout << "\nYou have " << chocolate << " chocolates. Do you want to explore (y/n)? ";
        cin >> explore;

        if (explore == 'y' || explore == 'Y') {
            cout << "You have entered into a room, and a ghost appears! It demands chocolate.\n";
            cout << "How many chocolates will you give? Enter a number: ";
            int chocolatesgiven;
            cin >> chocolatesgiven;

            if (chocolatesgiven > chocolate) {
                cout << "You don't have enough chocolates. The ghost is unhappy.\n";
            } else {
                chocolate -= chocolatesgiven;
                cout << "You gave " << chocolatesgiven << " chocolates. The ghost is pleased!\n";
                if (chocolate == 0) {
                    cout << "Congratulations! you've successfully escaped the horror mansion.\n";
                    break;
                }
            }
        } else if (explore == 'n' || explore == 'N') {
            cout << "You decide not to explore further. The exit is not in sight.\n";
        } else {
            cout << "Invalid choice. Please enter 'y' or 'n'.\n";
        }
    }

    return 0;
}
