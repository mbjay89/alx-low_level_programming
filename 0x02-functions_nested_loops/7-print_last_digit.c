#include "main.h"

/**
 *  * print_last_digit - prints the last digit of a number.
 *  *@n: takes an int as an input
 *  *  *
 *  * Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	x = -1 * (n % 10);
	else
	x = n % 10;

	_putchar((x % 10) + '0');

	return (x % 10);
}
