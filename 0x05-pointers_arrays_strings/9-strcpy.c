#include "main.h"
/**
 *  **_strcpy - function that that copies the string pointed to by src,
 *  *including the terminating null byte (\0),
 *  *to the buffer pointed to by dest
 *  *@dest : input pointer to a char
 *  *@src : input pointer to a cahr
 *  * Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src)
		*dest++ = *src++;
	return (x);
}
