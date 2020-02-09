#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class student
{
    string name;
    int rollNum;
    float marks[4], totalmarks;

    public:
    
    void getData()
    {
        int i; totalmarks =0;
        cout << "\nEnter the student name: ";
        fflush(stdin);
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNum;
        cout << "\nEnter the marks of four subjects out of 100: ";
        for(i=0;i<4;i++)
        {
            cin >> marks[i];
            if(marks[i] > 100)
                marks[i] = 100;
            if(marks[i] < 0)
                marks[i] = 0;    
            totalmarks += marks[i];
        }
    }

    void calcPercent()
    {
        cout << "\nThe percentage is: " << (totalmarks/4) << "%" << endl;
    }

    void showData()
    {
        int i;
        cout << "\nStudent Name: " << name << "\nRoll number: " << rollNum << "\nMarks of each subject:" << endl;
        for(i=0;i<4;i++)
        {
            cout << "Subject#" << i+1 << ": " << marks[i] << endl;
        }
        cout << "\nTotal Marks Obtained: " << totalmarks << endl;
    }

    void showChoices()
    {
        int choice;
        cout << "\nEnter a number according to the menu below:\n1. Print Student Info\n2. Calculate Percentage\n3. Change Student Info\n4. Exit Program" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                showData();
                break;
            case 2:
                calcPercent();
                break;
            case 3:
                getData();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "Invalid Input!";
                break;
        }
    }
};

int main()
{
    class student s1;
    s1.getData();

    while(1)
    {
        s1.showChoices();
    }
}