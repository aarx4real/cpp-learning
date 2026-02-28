    #include <iostream>

    class BankAccount
    {
    public:
        std::string owner;
        double balance;

        BankAccount(std::string owner, double balance)
        {
            this->owner = owner;
            this->balance = balance;
        }

        double deposit(double amount)
        {
            balance += amount;
            return balance;
        }

        double withdraw(double amount)
        {
            if (balance >= amount)
            {
                balance -= amount;
                return balance;
            }
            else
            {
                std::cout << "Insufficient funds";
            }
            return balance;
        }

        double getBalance()
        {
            return balance;
        }
    };

    int main()
    {
        BankAccount acc("Aarush", 1000);

        acc.deposit(500);   // balance = 1500
        acc.withdraw(200);  // balance = 1300
        acc.withdraw(2000); // prints "Insufficient funds"

        std::cout << acc.getBalance(); // Output: 1300
        return 0;
    }