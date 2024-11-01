#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0; 
    double amount;

    cout << "Welcome to the ATM!" << endl;

    while (true) {
        // Display menu options
        cout << "\nPlease choose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "You have successfully deposited $" << amount << endl;
                    cout << "Your new balance is: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "You have successfully withdrawn $" << amount << endl;
                    cout << "Your new balance is: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
