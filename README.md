🍽️ Restaurant Billing System (C++ Project)
📖 Overview

The Restaurant Billing System is a mini project written in C++ that automates the billing process for a restaurant.
It demonstrates core Object-Oriented Programming (OOP) concepts such as classes, objects, inheritance, constructors, destructors, and dynamic memory allocation.

The program allows customers to select food items from a menu, input quantities, and automatically calculates the total bill.
This project can be extended with more advanced features such as GST, discounts, and database connectivity.

🧠 Concepts Used

Classes and Objects

Encapsulation

Constructors & Destructors

Dynamic Memory Allocation

File Handling (for reading menu items)

🗂️ Project Structure
Restaurant-Billing-System/
│
├── restaurant_billing_with_file.cpp   # Main source code
├── menu.txt                           # Menu items with prices
├── README.md                          # Project documentation
└── LICENSE                            # (Optional) License file

📄 menu.txt (Sample Menu File)
Burger 120
Pizza 250
Cold_Drink 60
Pasta 180
Sandwich 90

💻 How to Run

Clone this repository:

git clone https://github.com/your-username/Restaurant-Billing-System.git
cd Restaurant-Billing-System


Compile the program:

g++ restaurant_billing_with_file.cpp -o restaurant


Run the program:

./restaurant


Follow the prompts:

Enter your name

Select menu items and quantities

View your bill instantly

🧾 Sample Output
------ Welcome to Foodie's Restaurant ------

--- MENU ---
1. Burger - Rs.120
2. Pizza - Rs.250
3. Cold_Drink - Rs.60
4. Pasta - Rs.180
5. Sandwich - Rs.90

Enter your name: Ritika
Enter item number: 2
Enter quantity: 2
Do you want to order more? (y/n): y
Enter item number: 3
Enter quantity: 3
Do you want to order more? (y/n): n

--- BILL DETAILS ---
Customer Name: Ritika
Items Ordered:
Pizza x 2 = Rs.500
Cold_Drink x 3 = Rs.180

Total Amount: Rs.680
Memory cleared for Ritika's order.

🚀 Features

✅ File-based menu reading
✅ Dynamic item selection
✅ Automatic total calculation
✅ OOP principles in action
✅ Expandable and modular design

🔮 Future Enhancements

Add GST and discount calculation

Save bills to a file (bill.txt)

Add GUI interface (Qt or Tkinter)

Integrate database for past orders

Enable online payment support
