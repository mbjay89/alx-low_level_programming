#include "main.h"

/**
 *  *  * _isalpha - checks for alphabetic character.
 *  *@c: takes a character as an input
 *  *  *
 *  * Return: 1 if lowercase or uppercase 0 if otherwise
*/
int _isalpha(int c)
{
	int x = 0;
	char i, I;

	for (I = 'A'; I <= 'Z'; I++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i || c == I)
		x = 1;
	}
	}
	return (x);
}
