#include <iostream>
#include <string>

using namespace std;

struct ProductData {
    string name;
    int price;
    int quantity_stock;
};

ProductData create_data() {
    ProductData product;
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, product.name);

    cout << "Enter product price: ";
    cin >> product.price;
 
    cout << "Enter quantity in stock: ";
    cin >> product.quantity_stock;

    return product;
}

void display_data(const ProductData &product) {
    cout << "Information of Product:" << endl;
    cout << "Name of product: " << product.name << endl;
    cout << "Price of product: " << product.price << endl;
    cout << "Quantity in stock: " << product.quantity_stock << endl;
}

int main() {
    ProductData product1, product2;
    cout << "Enter details for Product 1:" << endl;
    product1 = create_data();

    cout << "Enter details for Product 2:" << endl;
    product2 = create_data();

    // Display information for both products
    display_data(product1);
    display_data(product2);

    return 0;
}
