#include "main.h"
#include <stdio.h>

/**
 *  * _strlen - a function  that returns the length of a string.
 *  *@s : input pointer to a string
 *  * Return: the length of string
*/
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
	x++;
	s++;
	}
	return (x);
}
