#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class CounterType
{
    int count = 0;

    public:
    void changeCount(int num) // mutator function 
    {
        if(num < 0)
            cout << "\nCounter can't be a value less than Zero." << endl;
        else
            count = num;
    }

    void increaseCount()
    {
        count++;
        cout << "\nCounter is now at: " << count << endl;
    }

    void decreaseCount()
    {
        if(count >= 1)
            count--;
        else
            cout << "\nThe counter is at zero, it cannot decrease any further." << endl;
        cout << "\nCounter is now at: " << count << endl;
    }

    int returnCount()
    {
        return count;
    }

    void printCount()
    {
        cout << "\nThe counter is at: " << count << endl;
    }
};

int main()
{
    int i, choice, num;
    CounterType counter;
    cout << "The counter is at Zero" << endl;
    while(1)
    {
        cout << "\nSelect one of the following:\n1. Display Counter\n2. Change Count\n3. Increment Counter\n4. Decrement Counter\n5. Return Counter (example)\n6. Exit" << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                counter.printCount();
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> num;
                counter.changeCount(num);
                break;
            case 3:
                counter.increaseCount();
                break;
            case 4:
                counter.decreaseCount();
                break;
            case 5:
                cout << "The return value is: " << counter.returnCount() << endl;
                break;
            case 6:
                exit(0);
            default:
                cout << "Invalid Input!";
                break;
        }
    }
}