#include "main.h"

/**
 *  * print_diagonal - a function that draws a diagonal line on the terminal.
 *  * followed by a new line
 *  *@n: Integer input
 *  *
 *  * Return: 0 Always
*/
void print_diagonal(int n)
{
	int h, i = 0;

	if (n > 0)
	{
	for (; i < n; i++)
	{
	_putchar('\\');
	_putchar('\n');
	for (h = 0 ; h < i; h++)
	_putchar(' ');
	}
	}
	_putchar('\n');
}
