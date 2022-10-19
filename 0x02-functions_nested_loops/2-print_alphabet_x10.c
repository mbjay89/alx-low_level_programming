#include "main.h"

/**
 *  *  * print_alphabet_x10 - prints alphabet x10, in lowercase, and a new line
 *    *    *
 *     *     *No return values
*/
void print_alphabet_x10(void)
{
	int i, x;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (x = 0; x < 10; x++)
	{
	for (i = 0; i < 26; i++)
		_putchar(alph[i]);
	_putchar('\n');
	}
}
