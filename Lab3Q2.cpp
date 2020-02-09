#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Employee
{
    string firstName;
    string lastName;
    int monthlySalary;

    public:
    void getData()
    {
        cout << "\nEnter first name, last name and monthly salary: ";
        cin >> firstName >> lastName >> monthlySalary;
        if(monthlySalary < 0)
            monthlySalary = 0;
    }
    
    int yearlySalary()
    {
        return 12*monthlySalary;
    }

    void showInfo()
    {
        cout << "\nName: " << firstName << " " << lastName << "\nMonthly Salary: $" << monthlySalary << "\nYearly Salary: $" << yearlySalary() << endl;
    }

    void raise(float percent)
    {
        monthlySalary += monthlySalary*(percent/100);
    }

    void showChoices()
    {
        int choice;
        cout << "\nEnter a number for the corresponding option in the menu:\n1. Show Employee Info\n2. Display Yearly Salary\n3. Give Raise\n4. Go back" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                showInfo();
                break;
            case 2:
                cout << "Yearly Salary: $" << yearlySalary() << endl;
                break;
            case 3:
                raise(10);
                cout << "Yearly Salary after 10% raise: $" << yearlySalary() << endl;
                break;
            case 4:
                break;
            default:
                cout << "Input Invalid!";
                break;
        }
    }
};

int main()
{
    int i, choice;
    Employee employee1, employee2;
    cout << "Enter the data of the first employee: " << endl;
    employee1.getData();
    cout << "\nEnter the data of the second employee: " << endl;
    employee2.getData();

    while(1)
    {
        cout << "\nWhich employee's data do you want access?\nPress:\n1 for Employee#1\n2 for Employee#2\n3 for Exit Program" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                employee1.showChoices();
                break;
            case 2:
                employee2.showChoices();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Invalid Input";
                break;

        }
    }
}