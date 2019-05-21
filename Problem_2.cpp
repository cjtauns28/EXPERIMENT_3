#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{
	int provtemp[3][7], p, t;
	cout << "Enter all temperature for a wee of Province A, Province B, and then Province C. " << endl;
	for (p = 1; p <= 3; p++)
	{
		for (t = 0; t < 7; t++)
		{
			if (p == 1)
			{
				cout << "Province A, Day " << t + 1 << ": ";
				cin >> provtemp[p][t];
			}
			else if (p == 2)
			{
				cout << "Province B, Day " << t + 1 << ": ";
				cin >> provtemp[p][t];

			}
			else
			{
				cout << "Province C, Day " << t + 1 << ": ";
				cin >> provtemp[p][t];

			}

		}
	}

	cout << endl << endl << "Display Values: " << endl << endl;
	for (p = 1; p <= 3; p++)
	{
		for (t = 0; t < 7; t++)
		{
			if (p == 1)
			{
				cout << "Province A, Day " << t + 1 << ": ";
				cout << provtemp[p][t] << endl;
			}
			else if (p == 2)
			{
				cout << "Province B, Day " << t + 1 << ": ";
				cout << provtemp[p][t] << endl;

			}
			else
			{
				cout << "Province C, Day " << t + 1 << ": ";
				cout << provtemp[p][t] << endl;

			}

		}
	}
	_getch();
	return 0;
}