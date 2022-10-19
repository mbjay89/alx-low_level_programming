#include "main.h"

/**
 *  * _abs - computes the absolute value of an integer
 *  *@n: takes a character as an input
 *  *  *
 *  * Return: 1 if (+), 0 if 0 and -1 if (-)
*/

int _abs(int n)
{
	int x;

	if (n < 0)
	x = (n * -1);
	else if (n >= 0)
	x = n;

	return (x);
}
