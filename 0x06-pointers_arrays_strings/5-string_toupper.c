#include "main.h"
/**
 **string_toupper - function that changes all lowercase letters
 *of a string to uppercase.
 *@s : input pointer to char
 * Return: N/A
*/
char *string_toupper(char *s)
{
	char *p1 = s, *p2 = s;
	int i, l = 0;

	while (*p1)
	{
		l++;
		p1++;
	}

	p1 = p2;
	for (i = 1; i < l && *s != '\0'; i++)
	{
		if (s[i] != 32 && s[i] != '!' && s[i] != 10)
			s[i] -= 32;
	}
	return (p1);

}
