#include "main.h"
#include <stdio.h>

/**
 *  * swap_int - a function that swaps the values of two integers.
 *  *@a : first input pointer to integer
 *  *@b : second input pointer to integer
 *  * Return: 0 Always
*/
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
