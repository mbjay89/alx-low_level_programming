#include "main.h"

/**
 *  * print_line - a function that draws a straight line in the terminal
 *  * followed by a new line
 *  *@n: Integer input
 *  *
 *  * Return: 0 Always
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n; i++)
	_putchar('_');
	}
	_putchar('\n');
}
