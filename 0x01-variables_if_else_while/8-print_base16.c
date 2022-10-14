#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *8. Hexadecimal using putchar()
 *  *
 */
int main(void)
{
	char hex;

	for (hex = '1'; hex <= '9'; hex++)
	putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
	putchar(hex);
	putchar('\n');
	return (0);
}
