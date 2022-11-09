#include "main.h"
/**
 *  *_strcmp - function that compares two strings.
 *  *@s1 : input first integer
 *  *@s2 : input second integer
 *  * Return: pointer to dest
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
