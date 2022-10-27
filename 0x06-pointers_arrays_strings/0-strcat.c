#include "main.h"
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
	while(*src)
		*dest++ = *src++;
	*dest = '\0';

	return (x);
}
