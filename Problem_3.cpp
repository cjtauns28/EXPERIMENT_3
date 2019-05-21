#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{
	char word[200];
	int w, r;
	cout << "Enter your word: " << endl;
	cin.getline(word, 200);
	w = strlen(word);
	
	cout << endl << "The reverse of the word is: ";
	do
	{
		for (r = w; r >= 0; r--)
			cout << word[r];
	} while (r >= 0);
	cout << endl;
	cout << "The size of this array is: " << w + 1 ;


	_getch();
	return 0;
}