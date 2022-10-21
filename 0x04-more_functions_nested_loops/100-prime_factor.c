#include "main.h"
#include <stdio.h>

/**
 *  * main - program start point
 *  * Desc: a code finds and prints the largest prime factor of
 *  * the number 612852475143, followed by a new line.
 *  * Return: 0 Always
*/
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < n; i += 2)
	{
	while (n % i == 0 && n != i)
		n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
