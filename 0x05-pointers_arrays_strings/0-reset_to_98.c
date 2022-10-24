#include "main.h"
#include <stdio.h>

/**
 *  * reset_to_98 - a function that takes a pointer to an int as parameter
 *  * and updates the value it points to to 98
 *  *@n : a pointer to integer
 *  * For numbers which are multiples of both three and five print FizzBuzz.
 *  * Return: 0 Always
*/
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
	return;
}
