#include "main.h"

/**
 *  *  * _islower -  checks for lowercase character.
 *  *@c: takes a character as an input
 *  *  *
 *  * Return: 1 if lowercase or 0 if uppercase
*/
int _islower(int c)
{
	int x = 0;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
		x = 1;
	}
	return (x);
}
