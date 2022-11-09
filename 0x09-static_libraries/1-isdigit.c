#include "main.h"

/**
 *  *  * _isdigit - checks for a digit (0 through 9).
 *  *@c: takes a character as an input
 *  *  *
 *  * Return: 1 if c is a digit 0 if otherwise
*/
int _isdigit(int c)
{
	int x;

	if (c >= '0' && c <= '9')
	x = 1;
	else
	x = 0;

	return (x);
}
