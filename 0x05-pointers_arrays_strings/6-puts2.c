#include "main.h"

/**
 *  *puts2 - function that prints every other character of a string,
 *  *starting with the first character, followed by a new line.
 *  *@str : input pointer to a string
 *  * Return: N/A
*/
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[l] != '\0')
	l++;

	l -= 1;

	for (; i <= l; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
