#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *4. Small Alphabets except e & q using putchar()
 *  *
 */
int main(void)
{
	char string;

	for (string = 'a'; string <= 'z'; string++)
	{
		if (string != 'q' && string != 'e')
		putchar(string);
	}
	putchar('\n');
	return (0);
}
