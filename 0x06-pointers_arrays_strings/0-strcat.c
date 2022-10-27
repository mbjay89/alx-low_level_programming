#include "main.h"
/**
 *  **_strcat - function that concatenates two strings.
 *  *@dest : input pointer to a char
 *  *@src : input pointer to a cahr
 *  * Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (x);
}
