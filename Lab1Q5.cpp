#include<iostream>
#include<iomanip>
using namespace std;

struct baseball_player{
	string name;
	int home_run, hits, index;
};

int main()
{
	struct baseball_player p[10];
	int i,j,k, search, search2;
	int menu;
	for(i=0;;i++)
	{
		cout << "\nSelect one of the following options: \n\n1. Add Player\n2. Search Player\n3. Update Player Info\n4. List All Players\n5. Exit Program" << endl;
		cin >> menu;
		getchar();
		switch(menu)
		{
			case 1:
				cout << "\nEnter Index number, Name, home runs and hits of Player: ";
				cin >> p[i].index >> p[i].name >> p[i].home_run >> p[i].hits;
				break;
			case 2:
				cout <<"\nEnter Index number of player: ";
				cin >> search;
				for(j=0;j<10;j++)
				{
					if(search == p[j].index)
					{
						cout << "\nName: " << p[j].name << " Hits: " << p[j].hits << " Home Runs: " << p[j].home_run << endl;
						break;
					}
				}
				i--;
				break;
			case 3:
				cout <<"\nEnter Index number of player: ";
				cin >> search;
				for(j=0;j<10;j++)
				{     
					if(search == p[j].index)
					{
						cout << "\nEnter the new Name, home runs and hits: ";
						cin >> p[j].name >> p[j].home_run >> p[j].hits;
                        break;
                    }
				}
				i--;
				break;
            case 4:
                for(j=0;j<i;j++)
                {
                    cout << "\nIndex: " << p[j].index << " Name: " << p[j].name << " Hits: " << p[j].hits << " Home Runs: " << p[j].home_run << endl; 
                }
                i--;
                break;
            case 5:
                i--;
                exit(0);
                break;
            default:
                cout << "\nPlease enter a valid input." << endl;
                i--;
                break;
		}
	}
}