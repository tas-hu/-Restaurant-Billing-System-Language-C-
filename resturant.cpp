#include <iostream>
#include <string>
using namespace std;

// Class representing a menu item
class MenuItem {
    string name;
    float price;

public:
    MenuItem(string n, float p) {
        name = n;
        price = p;
    }

    void display() {
        cout << name << " - Rs." << price << endl;
    }

    float getPrice() { return price; }

    string getName() { return name; }
};

// Class representing a customer order
class Order {
    string customerName;
    MenuItem *item;
    int quantity;

public:
    Order(string cname, MenuItem *i, int q) {
        customerName = cname;
        item = i;
        quantity = q;
    }

    void showBill() {
        cout << "\n--- BILL DETAILS ---\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Item: " << item->getName() << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Amount: Rs." << item->getPrice() * quantity << endl;
    }

    ~Order() {
        cout << "\nMemory cleared for " << customerName << "'s order.\n";
    }
};

// Main function
int main() {
    cout << "------ Welcome to Foodie's Restaurant ------\n";

    MenuItem m1("Burger", 120.0);
    MenuItem m2("Pizza", 250.0);
    MenuItem m3("Cold Drink", 60.0);

    cout << "\n--- MENU ---\n";
    m1.display();
    m2.display();
    m3.display();

    string name;
    int choice, qty;

    cout << "\nEnter your name: ";
    getline(cin, name);

    cout << "Enter item number (1-Burger, 2-Pizza, 3-Cold Drink): ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> qty;

    MenuItem *selectedItem;
    if (choice == 1)
        selectedItem = &m1;
    else if (choice == 2)
        selectedItem = &m2;
    else
        selectedItem = &m3;

    Order *o1 = new Order(name, selectedItem, qty);
    o1->showBill();

    delete o1;
    return 0;
}
