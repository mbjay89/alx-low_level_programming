#include "main.h"
#include <stdlib.h>
/**
 **create_array - function that creates an array of chars, and initializes it
 *with a specific char.
 *@size : input strings
 *@c : input char
 * Return: NULL if size = 0
 *a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	for (i = 0 ; i < size; i++)
	{
		if (size != 0)
			str[i] = c;
	}
	if (size == 0)
		return (NULL);
	return (str);
}
