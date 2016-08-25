#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i, j;

	char lett[] = { 'P', 'R', 'O', 'G', 'R', 'A', 'M' };
	char op[7][7];

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			op[i][j] = ' ';
		}
	}

	for ( i = 0 , j=0 ; i < 7, j < 7; i++, j++)
	{
		
		{
			op[i][j] = lett[i];
		}
	}

	for (i = 6, j = 0; i >= 0, j < 7; i--, j++)
	{

		{
			op[i][j] = lett[j];
		}
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout<<op[i][j];
		}
		cout << "\n";
	}

	_getch();

}