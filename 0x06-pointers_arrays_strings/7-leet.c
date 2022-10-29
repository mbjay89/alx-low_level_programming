#include "main.h"
/**
 **leet - function that encodes a string into 1337.
 *@s : input string
 * Return: char pointer to encoded string
*/
char *leet(char *s)
{
	int h, i = 0;
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char enc[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (h = 0; h < 10; h++)
			if (s[i] == str[h])
				s[i] = enc[h];
		i++;
	}

	return (s);
}
