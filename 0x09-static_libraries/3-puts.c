#include "main.h"
#include <stdio.h>

/**
 *  * _puts - function that prints a string, followed by a new line to stdout
 *  *@str : input pointer to a string
 *  * Return: the length of string
*/
void _puts(char *str)
{
	int i = 0, l = _strlen(str), n = (l - 1) / 2;

	for (;i <= l ; i++)
	{
		if (i > l / 2 && l % 2 == 0)
			{
			_putchar(*str + l / 2);
			str++;
			}
		else if (l % 2 == 1)
			_putchar(*str + (l - 1));
		break;
	}
	_putchar('\n');
}
