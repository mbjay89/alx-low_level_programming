#include "main.h"

/**
 *  *puts_half - function that prints half of a string, followed by a new line.
 *  *@str : input pointer to a string
 *  * Return: N/A
*/
void puts_half(char *str)
{
	int i, n, l = 0;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;

	for (i = n; i < l ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
