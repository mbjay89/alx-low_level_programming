#include "main.h"

/**
 *  * print_square - a function that prints a square,
 *  * followed by a new line
 *  *@size: Integer input
 *  *
 *  * Return: 0 Always
*/
void print_square(int size)
{
	int i = 1, j;

	if (size > 0)
	{
	for (; i <= size; i++)
	{
	_putchar('#');
		for (j = 1; j < size; j++)
			_putchar('#');
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
