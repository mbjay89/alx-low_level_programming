#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *10.  all possible different combinations of two digits
 *  *
 */
int main(void)
{
	int i, n;
	for (i = '0'; i < '9' ; i++)
	{
		for (n = i+1; n <= '9'; n++)
		{
		if (i != n)
		{
		putchar (i);
		putchar (n);
		if (i == '8' && n == '9')
		continue;
		putchar (',');
		putchar (' ');
		}
		}
	}
	putchar ('\n');
	return (0);
}
