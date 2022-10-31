#include "main.h"
/**
 **_memcpy - function that copies memory area.
 *copies n bytes from memory area src to memory area dest
 *by s with the constant byte b
 *@dest : pointer to the destination
 *@src : Value to be copied
 *@n : Number of bytes to be copied
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest++ =  *src++;
	}

	return (ptr);
}
