#include "main.h"
#include <stdio.h>

/**
 *  * print_rev - function that prints a string, in reverse,
 *  *followed by a new line.
 *  *@s : input pointer to a string
 *  * Return: N/A
*/
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	l++;
	while (l)
	_putchar(s[--l]);
	_putchar('\n');
}
