#include <iostream>
#include <string>
using namespace std;

class GSI
{
public:
    string unique_id;
    string name;
    int price;
    int quantity;

    void get_data(string id, string n, int x, int y)
    {
        unique_id = id;
        name = n;
        price = x;
        quantity = y;
    }

    void show_data() const
    {
        cout << "ID: " << unique_id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    void update_item()
    {
        cout << "Update item (price or quantity): ";
        string choice;
        cin >> choice;
        if (choice == "price")
        {
            cout << "Enter the updated price: ";
            cin >> price;
        }
        else if (choice == "quantity")
        {
            cout << "Enter the updated quantity: ";
            cin >> quantity;
        }
        else
        {
            cout << "INVALID CHOICE" << endl;
        }
    }

    GSI(string id = "", string n = "", int x = 0, int y = 0)
    {
        unique_id = id;
        name = n;
        price = x;
        quantity = y;
    }

    ~GSI()
    {
        cout << "OBJECT DESTROYED";
    }
};

void Display_items(const GSI arr[], int size)
{
    cout << "\nDisplaying all items:" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i].show_data();
        cout << endl;
    }
}

void Update_item_details(GSI &item)
{
    item.update_item();
}

void searching_item(const GSI arr[], int size, string id)
{
    cout << "SEARCHING ITEMS BY DETAILS" << endl;
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].unique_id == id)
        {
            arr[i].show_data();
            found = 1;
            break;
        }
    }
    if (!found)
    {
        cout << "ITEMS NOT FOUND" << endl;
    }
}

int main()
{
    int size;
    cout << "Enter the total number of items to store: ";
    cin >> size;

    GSI arr[size];

    for (int i = 0; i < size; i++)
    {
        string id, name;
        int price, quantity;

        cout << "\nEnter details for item " << i + 1 << ":" << endl;
        cout << "Enter unique id for item: ";
        cin >> id;
        cout << "Enter name of item: ";
        cin >> name;
        cout << "Enter price of item: ";
        cin >> price;
        cout << "Enter quantity of item: ";
        cin >> quantity;

        arr[i].get_data(id, name, price, quantity);
    }

    int choice;
    string search_item;

    do
    {
        cout << "\nMENU OF GROCERY STORE" << endl;
        cout << "1. DISPLAY ITEMS IN STORE" << endl;
        cout << "2. UPDATE ITEMS" << endl;
        cout << "3. SEARCH ITEMS" << endl;
        cout << "4. EXIT PROGRAM" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Display_items(arr, size);
            break;
        case 2:
            int update_index;
            cout << "Enter the index of item to update (1 to " << size << "): ";
            cin >> update_index;
            if (update_index >= 1 && update_index <= size)
            {
                Update_item_details(arr[update_index - 1]);
            }
            else
            {
                cout << "Invalid index!" << endl;
            }
            break;
        case 3:
            cout << "Enter id to search item: ";
            cin >> search_item;
            searching_item(arr, size, search_item);
            break;
        case 4:
            cout << "EXITING PROGRAM" << endl;
            break;
        default:
            cout << "INVALID CHOICE" << endl;
        }
    } while (choice != 4);

    return 0;
}
