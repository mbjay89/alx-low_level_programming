#include "main.h"
#include <stdio.h>

/**
 *  *rev_string - function that reverses a string.
 *  *@s : input pointer to a string
 *  * Return: N/A
*/
void rev_string(char *s)
{
	int l = 0, i = 0;
	char str;

	while (s[l] != '\0')
	l++;

	while (i < l--)
	{
		str = s[i];
		s[i++] = s[l];
		s[l] = str;
	}
}
