#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class bankAccount
{
    float balance, interest = 0;
    int numTrans = 0;

    public:
    void getData()
    {
        cout << "\nEnter the balance: ";
        cin >> balance;
    }

    void displayBalance()
    {
        cout << "\nThe current balance is: $" << fixed << setprecision(2) << balance << endl;
    }

    void displayTrans()
    {
        cout << "\nThe number of transactions: " << numTrans << endl;
    }

    void interestCalc()
    {
        float percent;
        int period;
        cout << "\nEnter the percentage of interest: ";
        cin >> percent;
        cout << "Enter the time period (in years): ";
        cin >> period;
        
        interest = balance*(percent/100)*period;
    }

    void depositCash()
    {
        float amount;
        cout << "\nEnter the amount to be deposited: ";
        cin >> amount;
        balance += amount;
        numTrans++;
    }

    void withdrawCase()
    {
        float amount;
        cout << "\nEnter the amount to be withdrawn: ";
        cin >> amount;
        if(amount > balance)
            cout << "Unable to perform transaction due to insufficient balance." << endl;
        else
            balance -= amount;
        numTrans++;
    }

    void showChoices()
    {
        int choice;
        while(1)
        {
            cout << "\nEnter the corresponding number in the menu:\n1. Display the account balance\n2. Display the number of transactions\n3. Display interest earned for this period\n4. Make a deposit\n5. Make a withdrawal\n6. Add interest for this period\n7. Exit Program" << endl;
            cin >> choice;
            switch(choice)
            {
                case 1:
                    displayBalance();
                    break;
                case 2:
                    displayTrans();
                    break;
                case 3:
                    interestCalc();
                    cout << "\nThe interest earned for this period is: $" << fixed << setprecision(2) << interest << endl;
                    break;
                case 4:
                    depositCash();
                    break;
                case 5:
                    withdrawCase();
                    break;
                case 6:
                    balance += interest;
                    numTrans++;
                    break;
                case 7:
                    return;
                default:
                    cout << "Invalid Input." << endl;
                    break;
            }
        }
    }
};

int main()
{
    bankAccount acc1;
    acc1.getData();
    acc1.showChoices();
}