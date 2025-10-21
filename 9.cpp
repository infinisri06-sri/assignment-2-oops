#include <iostream>
#include <string.h>
using namespace std;

// Class bank account
class Bank_Account {
private:
    string name;     // Account holder's name
    float Balance;   // Current account balance

public:
    // Constructor to initialize account with name and initial balance
    Bank_Account(string N, float bal) {
        this->Balance = bal;
        this->name = N;
    }

    // Method to check current balance
    float check_balance() {
        return this->Balance;
    }

    // Method to deposit money into the account
    void deposite(float dep_amount) {
        if (dep_amount <= 0) {
            cout << "Deposit amount must be positive!\n";
        } else {
            this->Balance += dep_amount;
            cout << dep_amount << " Amount Deposited Successfully!\n";
        }
    }

    // Method to withdraw money from the account
    void withdrawal(float with_amount) {
        if (with_amount > this->Balance) {
            cout << "___Insufficient Balance____" << endl;
        } else {
            this->Balance -= with_amount;
            cout << with_amount << " Amount Withdrawn Successfully!" << endl;
        }
    }
};

int main() {
    string name;
    float ini_balance;

    // Prompt user for account details
    cout << "Enter Your User Name: " << endl;
    getline(cin, name);
    cout << "Enter Initial Balance: " << endl;
    cin >> ini_balance;

    // Create a Bank_Account object with user input
    Bank_Account BA(name, ini_balance);

    int choice;
    do {
        // Display ATM menu
        cout << "\n================= ATM MENU =================\n";
        cout << "1--Check Balance\n";
        cout << "2--Deposit Money\n";
        cout << "3--Withdraw Money\n";
        cout << "4--Exit\n";
        cout << "===========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        float dep_amount, with_amount;

        // Handle user choice and there are many multiple conditions 
        switch (choice) {
            case 1:
                cout << "Your Bank Balance is: " << BA.check_balance();
                break;
            case 2:
                cout << "Enter amount to deposit: " << endl;
                cin >> dep_amount;
                BA.deposite(dep_amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: " << endl;
                cin >> with_amount;
                BA.withdrawal(with_amount);
                break;
            case 4:
                cout << "Thank you for using our ATM!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again" << endl;
        }
    } while (choice != 4);  // Loop until user chooses to exit

    return 0;
}
