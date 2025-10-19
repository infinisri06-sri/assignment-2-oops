#include <iostream>
#include<string.h>
using namespace std;
class Bank_Account
{
private:
    string name;
    float Balance;

public:
    Bank_Account(string N, float bal)
    {
        this->Balance = bal;
        this->name = N;
    }
    float check_balance()
    {
        return this->Balance;
    }
    void deposite(float dep_amount)
    {
        if (dep_amount <= 0)
        {
            cout << "Deposit amount must be positive!\n";
        }
        else
        {
            this->Balance += dep_amount;
            cout << dep_amount << " Amount Deposited Successfully!\n";
        }
    }
    void withdrawal(float with_amount){
        if(with_amount>this->Balance){
            cout<<"___Insufficient Balance____"<<endl;
        }
        else{
            this->Balance-=with_amount;
            cout<<with_amount<<" Amount Deposited Successfully!"<<endl;
        }
    }
};
int main(){
    string name;
    float ini_balance;
    cout<<"Enter Your User Name: "<<endl;
    getline(cin,name);
    cout<<"Enter Iniitial Balance: "<<endl;
    cin>>ini_balance;
    Bank_Account BA(name,ini_balance);
    int choice;
    do {
        cout << "\n================= ATM MENU =================\n";
        cout << "1--Check Balance\n";
        cout << "2--Deposit Money\n";
        cout << "3--Withdraw Money\n";
        cout << "4--Exit\n";
        cout << "===========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        float dep_amount,with_amount;
        switch (choice) {
            case 1:
                cout<<"Your Bank Balance is: "<<BA.check_balance();
                break;
            case 2:
                cout << "Enter amount to deposit: "<<endl;
                cin >> dep_amount;
                BA.deposite(dep_amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: "<<endl;
                cin >> with_amount;
                BA.withdrawal(with_amount);
                break;
            case 4:
                cout << "Thank you for using our ATM!"<<endl;
                break;
            default:
                cout << "Invalid choice! Please try again"<<endl;
        }
    } while (choice != 4);
    return 0;
}