int sep(char x);
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
		if (sep(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		s[i + 1] -= 32;
	}
	return (p1);

}
/**
**sep - function that check separators
*@x : input string
* Return: 1 if seperator, 0 otherwise
*/
int sep(char x)
{
	int i = 0;
	char sep[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
				'"', '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (x == sep[i])
			return (1);
	}
	return (0);
}
