#include <iostream>

class ATM {
private:
    float balance;
    std::string recentTransactions[10];
    int transactionCount;

public:
    ATM() : balance(0), transactionCount(0) {}

    void withdrawMoney(float amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds" << std::endl;
        } else {
            balance -= amount;
            recentTransactions[transactionCount++] = "Withdrawal of $" + std::to_string(amount);
            std::cout << "Withdrawn $" << amount << ". Current balance: $" << balance << std::endl;
        }
    }

    void transferMoney(std::string recipientAccount, float amount) {
        balance -= amount;
        recentTransactions[transactionCount++] = "Transferred $" + std::to_string(amount) + " to account " + recipientAccount;
        std::cout << "$" << amount << " transferred to account " << recipientAccount << ". Current balance: $" << balance << std::endl;
    }

    void checkRecentTransactions() {
        std::cout << "Recent Transactions:" << std::endl;
        for (int i = 0; i < transactionCount; ++i) {
            std::cout << recentTransactions[i] << std::endl;
        }
    }

    float getBalance() const {
        return balance;
    }
};

int main() {
    ATM atm;


    while (true) {
        std::cout << "\nATM Menu:" << std::endl;
        std::cout << "1. Withdraw Money" << std::endl;
        std::cout << "2. Transfer Money" << std::endl;
        std::cout << "3. Check Recent Transactions" << std::endl;
        std::cout << "4. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                float withdrawAmount;
                std::cout << "Enter the amount to withdraw: $";
                std::cin >> withdrawAmount;
                atm.withdrawMoney(withdrawAmount);
                break;
            }
            case 2: {
                std::string recipientAccount;
                float transferAmount;
                std::cout << "Enter the recipient's account number: ";
                std::cin >> recipientAccount;
                std::cout << "Enter the amount to transfer: $";
                std::cin >> transferAmount;
                atm.transferMoney(recipientAccount, transferAmount);
                break;
            }
            case 3:
                atm.checkRecentTransactions();
                break;
            case 4:
                std::cout << "Thank you for using the ATM. Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }
    }


    float array1[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    int array2[6] = {6, 5, 4, 3, 2, 1};

    std::cout << "Result of multiplication:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cout << array1[i] * array2[5 - i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

