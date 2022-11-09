#include "main.h"

/**
 *  *  * _isupper - checks for uppercase character.
 *  *@c: takes a character as an input
 *  *  *
 *  * Return: 1 if c uppercase 0 if otherwise
*/
int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
	x = 1;
	else
	x = 0;

	return (x);
}
