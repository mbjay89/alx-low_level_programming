#include "main.h"
/**
 **cap_string - function that capitalizes all words of a string.
 *of a string to uppercase.
 *@s : input string
 * Return: char pointer to converted string
*/
char *cap_string(char *s)
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
		if ((s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == 32) ||
				s[i - 1] == 10 || s[i - 1] == 9)
			s[i] -= 32;
	}
	return (p1);

}
