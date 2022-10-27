#include "main.h"
/**
 *  **_strncat - function that concatenates two strings.
 *  *This function appends the src string to the dest string,
 *  *overwriting the terminating null byte (\0) at the end of dest,
 *  *and then adds a terminating null byte
 *  *@dest : input pointer to a char
 *  *@src : input pointer to a cahr
 *  * Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *x = dest, *p = src;
	int i, len = 0;

	while(*src)
	{
		len++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > len)
		n = len;
	src = p;
	for (i = 0; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';

	return (x);
}
