#include "main.h"

/**
 *  *puts_half - function that prints half of a string, followed by a new line.
 *  *@str : input pointer to a string
 *  * Return: N/A
*/
void puts_half(char *str)
{
	int i = 0, l = 0;
/*	int n = (l - 1) / 2; */
	while (str[l] != '\0')
		l++;
	for (; i <= l ; i++)
	{
		if (i > l / 2 /* && l % 2 == 0*/)
		{
		_putchar(*str + l / 2);
		str++;
		}
	else if (l % 2 == 1)
		{
		_putchar(*str + (l - 1));
		break;
		}
	}
	_putchar('\n');
}
