#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *12.  all possible combinations of two 2 digit numbers
 *  *
 */
int main(void)
{
	int i, n;

	for (i = 0 ; i <= 98 ; i++)
	{
	for (n = i+1 ; n <= 99 ; n++)
	{
		putchar ((i / 10) + '0');
		putchar ((i % 10) + '0');
		putchar (' ');
		putchar ((n / 10) + '0');
		putchar ((n % 10) + '0');
		if (i == 98 && n == 99)
		continue;
		putchar (',');
		putchar (' ');
		}
		}
	putchar ('\n');
	return (0);
}
