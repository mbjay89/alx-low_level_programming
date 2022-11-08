#include "main.h"
#include <stdlib.h>
/**
 **_strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *@str : input strings
 * Return: a pointer to a new string which is a duplicate of the string str
 * the new string is obtained with malloc, and can be freed with free
 * Returns NULL if str = NULL
 * returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
