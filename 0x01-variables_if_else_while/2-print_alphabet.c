#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *2. Alphabets small letters using putchar()
 *  *
 */
int main(void)
{
	char string;

	for (string = 'a'; string <= 'z'; string++)
	putchar(string);
	putchar('\n');
	return (0);
}
