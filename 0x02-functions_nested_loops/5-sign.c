#include "main.h"

/**
 *  * print_sign - prints the sign of a number.
 *  *@c: takes a character as an input
 *  *  *
 *  * Return: 1 if (+), 0 if 0 and -1 if (-)
*/

int print_sign(int n)
{
	int x;

	if (n == 0)
	{
	x = 0;
	_putchar ('0');
	}
	else if (n > 0)
	{
	x = 1;
	_putchar ('+');
	}
	else
	{
	x = -1;
	_putchar ('-');
	}

	return (x);
}
