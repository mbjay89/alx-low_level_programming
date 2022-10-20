#include "main.h"

/**
 *  *  * more_numbers - a function that prints 10 times the numbers
 *  *  * from 0 to 14, followed by a new line.
 *  * Return: N/A
*/
void more_numbers(void)
{
	int i, h, n;

	for (n = 0; n <= 9; n++)
	{
	for (i = '0'; i <= '1'; i++)
	for (h = '0'; h <= '9'; h++)
	{
	if (i > '0')
	_putchar(i);
	_putchar(h);
	if (i == '1' && h == '4')

	break;
	}
	_putchar('\n');
	}
}
