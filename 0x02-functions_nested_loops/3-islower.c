#include "main.h"

/**
 *  *  * _islower -  checks for lowercase character.
 *  *@c: takes a character as an input
 *  *  *
 *  * Returns 1 if c is lowercase
 *  * Returns 0 otherwise
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
