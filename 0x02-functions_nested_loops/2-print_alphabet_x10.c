#include "main.h"

/**
 *  *  * print_alphabet_x10 - prints alphabet x10, in lowercase, and a new line
 *    *    *
 *     *     *No return values
*/
void print_alphabet_x10(void)
{
	int i;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	
	for (i = 0; i < 10; i++)
	{
	for (i = 0; i < 26; i++)
		_putchar(alph[i]);
	_putchar('\n');
	}
}
