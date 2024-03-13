#include <iostream>

using namespace std;

int main()
{
    // fixed price list
    int burgerprice = 300;
    int addonsprice = 200; //(fries or coke)

    int total = 0;
    char burger;
    char addon; // Change 'int addon' to 'char addon'

    cout << "Do you want Burger? : ";
    cin >> burger;

    if (burger == 'y' || burger == 'Y') // b means burger
    {
        cout << "Burger added" << endl;
        total += burgerprice; // adding burger charges to total price
        cout << "Do you want add fries or cold drink just for 200Rs? (y/n): ";
        
        cin >> addon;

        if (addon == 'y' || addon == 'Y') // b 
        {
            total += addonsprice; // adding add-on fries and cold drink charges to total
            cout << "Thank You" << endl; // Added missing semicolon
            cout << "\nTotal Bill: " << total << endl;
        }
        else
        {
            cout << "Invalid Value" << endl;
        }
    }
    else if (burger == 'n' || burger == 'N')
    {
        cout << "No Burger added" << endl;
        cout << "\nTotal Bill: " << total << endl;
    }
    else
    {
        cout << "Invalid Value" << endl;
    }

    return 0;
}
