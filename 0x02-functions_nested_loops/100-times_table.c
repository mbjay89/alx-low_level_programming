#include "main.h"

/**
 *  * print_times_table -   prints the n times table, starting with 0
 *  * Desc: If n is greater than 15 or less than 0 the function should not print anything
 *  * Return: N/A
 *  *  *
*/
void print_times_table(int n)
{

	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	n = i * j;
	if ((n / 10) == 0)
	{
	if (j != 0)
	_putchar(' ');
	_putchar(n + '0');
	if (j == 9)
	continue;
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');

	if (j == 9)
	continue;
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}

