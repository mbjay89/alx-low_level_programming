#include "main.h"

/**
 * print_times_table -   prints the n times table, starting with 0
 * if n is greater than 15 or less than 0 it should not print anything
 * @n: the number of times table
 * Return: N/A
 *
 */
void print_times_table(int n)
{

	int i, j, temp = n;

	if (n < 15 && n >= 0)
	{
	for (i = 0; i <= temp; i++)
	{
	for (j = 0; j <= temp; j++)
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
	else
		return;
}

