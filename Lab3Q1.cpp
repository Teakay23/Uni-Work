#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class bankAccount
{
    string accountName;
    float balance;
    int AccNum;

    public:
    void getData(string n, float b, int num) // setter function
    {
        accountName = n;
        balance = b;
        AccNum = num;
    }

    void displayData() // getter function
    {
        cout << "\nAccount Number: " << AccNum << "\nAccount Holder: " << accountName << "\nBalance: $" << fixed << setprecision(2) << balance << endl;
    }

    void deposit(float amount) // mutator function
    {
        balance += amount;
        cout << "\nThe updated balance is: $" << fixed << setprecision(2) << balance << endl;
    }

    void withdraw()
    {
        float amount;
        cout << "\nThe current baklance is: $" << fixed << setprecision(2) << balance << endl;
        cout << "Enter the amount to be withdrawn: ";
        cin >> amount;
        if(amount > balance)
        {
            cout << "The balance is not sufficient!" << endl;
            return;
        }
        balance -= amount;
        cout << "\nThe updated balance is: $" << fixed << setprecision(2) << balance << endl;
    }
};

int main()
{
    int acNumber, i, choice;
    string name;
    float initial_balance, deposit_amount;
    bankAccount b1;

    cout << "\nTo open an account, enter your name: ";
    getline(cin, name);
    cout << "Enter Account number and balance: ";
    cin           >> acNumber >> initial_balance;
    b1.getData(name, initial_balance, acNumber);

    for(i=0;choice!=4;)
    {
        cout << "\nEnter a number correspoding to the menu below:\n1. Display Account Info\n2. Deposit an amount\n3. Withdraw an Amount\n4. Close Program" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                system("cls");
                b1.displayData();
                break;
            case 2:
                system("cls");
                cout << "Enter amount to be deposited: ";
                cin >> deposit_amount;
                b1.deposit(deposit_amount);
                break;
            case 3:
                system("cls");
                b1.withdraw();
                break;
            case 4:
                break;
            default:
                system("cls");
                cout << "Input Invalid!";
                break;
        }
    }
}