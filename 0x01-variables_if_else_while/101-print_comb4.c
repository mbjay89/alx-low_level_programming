#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *11.  all possible combinations of 3 digit number
 *  *
 */
int main(void)
{
	int s, i, n;

	for (s = '0'; s < '9'; s++)
	{
	for (i = s + 1; i < '9' ; i++)
	{
		for (n = i + 1; n <= '9'; n++)
		{
		if (i != n && i != s && n != s)
		{
		putchar (s);
		putchar (i);
		putchar (n);
		if (s == '7' && i == '8' && n == '9')
		continue;
		putchar (',');
		putchar (' ');
		}
		}
	}
	}
	putchar ('\n');
	return (0);
}
