#include <iostream>
using namespace std;

int main() {

    int choice;
    float balance = 1000, amount;

    do {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

               switch(choice) {

        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            
            while(amount > balance) {
                cout << "Insufficient balance! Enter again: ";
                cin >> amount;
            }

            balance -= amount;
            cout << "Withdraw Successful\n";
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;

            while(amount <= 0) {
                cout << "Invalid amount! Enter again: ";
                cin >> amount;
            }

            balance += amount;
            cout << "Deposit Successful\n";
            break;

        case 3:
            cout << "Balance: " << balance << endl;
            break;

        case 4:
            cout << "Exit...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}
