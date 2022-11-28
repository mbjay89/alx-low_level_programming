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

	int i, j, temp;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				temp = i * j;
				if (j == 0)
				_putchar(temp + '0');
				else if (temp < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(temp + '0');
				}
				else if (temp >= 10 && temp < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((temp / 10) + '0');
					_putchar((temp % 10) + '0');
				}
				else if (temp >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((temp / 100) + '0');
					_putchar(((temp / 10) % 10) + '0');
					_putchar((temp % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
