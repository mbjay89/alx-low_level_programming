#include "main.h"
#include <stdio.h>

/**
 *  * _puts - a function that prints a string, followed by a new line, to stdout.
 *  *@str : input pointer to a string
 *  * Return: the length of string
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
