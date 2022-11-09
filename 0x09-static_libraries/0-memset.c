#include "main.h"
/**
 **_memset - function that fills memory with a constant byte.
 *The _memset() function fills the first n bytes of the memory area pointed to
 *by s with the constant byte b
 *@s : pointer to the destination
 *@b : Value to be filled.
 *@n : Number of bytes to be filled starting from s
 * Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}

	return (ptr);
}
