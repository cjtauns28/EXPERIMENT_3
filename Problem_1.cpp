#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
	int inte[10], hi, lo, n, sum = 0, a=0, b;
	double ave;
	cout << "Enter the 10 integers" << endl;
	for (n = 0; n < 10; n++)
	{
		cin >> inte[n];

		if (n == 0)
		{
			hi = inte[n];
			lo = inte[n];
		}
		else
		{
			if (inte[n] > hi)
			{

				hi = inte[n];
			}
			if (inte[n] < lo)
			{
				lo = inte[n];
			}

		}
	
		
		b = inte[n];
		sum = a + b;
		a = sum;

		

		
	}
		
		

		
	cout << setprecision(2) << fixed;
	cout << "The highest integer is: " << hi << endl;
	cout << "The lowest integer is: " << lo << endl;
	cout << "The sum of the integers is:" << sum << endl;
	ave = sum / 10; 
	cout << "The average of the integers is: " << ave << endl;
	_getch();
	return 0;

}