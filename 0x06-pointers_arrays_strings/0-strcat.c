#include "main.h"
/**
 *  **_strcat - function that concatenates two strings.
 *  *@dest : input pointer to a char
 *  *@src : input pointer to a cahr
 *  * Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *x = dest,  l = _strlen(dest);
	int i;

	for (i = 0; i < (l && src[i] != '\0'); i++)
		x[l + i] = src[i];
	x[l + i] = '\0';

	return (x);
}
