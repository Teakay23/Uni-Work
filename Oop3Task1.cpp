#include<iostream>
#include<iomanip>

using namespace std;

class Account
{
    int balance;

    public:
    Account()
    {
        cout << "\nEnter the balance of this account: ";
        cin >> balance;
        if(balance < 0)
        {
            balance = 0;
            cout << "The amount you entered is invalid! Balance has been set to zero" << endl;
        }
    }

    void credit(int amount)
    {
        balance += amount;
    }

    void debit(int amount)
    {
        if(amount > balance)
            cout << "\nAmount exceeded account balance." << endl;
        else
            balance -= amount;
    }

    int getBalance()
    {
        return balance;
    }
};

Account a1, a2;

class counter
{
    public:
    void billPayment(Account a)
    {
        int amount, withTax;
        cout << "\nEnter the amount of your Bill: ";
        cin >> amount;
        cout << "Bill amount will be deducted from your bank account including 10% Tax." << endl;
        withTax = amount + (amount*0.01);
        a.debit(withTax);
    }

    int currencyExchange(int choice, int amount)
    {   
        switch(choice)
        {   
            case 1:
                amount = amount*154;
                break;
            case 2:
                amount = amount/154;
                break;
            case 3:
                amount = amount*199;
                break;
            case 4:
                amount = amount/199;
                break;
            case 5:
                amount = amount*169;
                break;
            case 6:
                amount = amount/169;
                break;
            default:
                cout << "Input Invalid!" << endl;
                currencyExchange(choice, amount);
                break;
        }
        return amount;
    }

    
};