#include "main.h"
/**
 *  **_strncpy - function that copies a string
 *  *function should work exactly like strncpy.
 *  *@dest : input pointer to a char
 *  *@src  : input pointer to a cahr
 *  *@n    : input iteger
 *  * Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *x = dest, *p = src;
	int i, len = 0;

	while (*src)
	{
		len++;
		src++;
	}
	src = p;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (x);
}
