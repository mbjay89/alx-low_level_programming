#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: 1 (Success)
 *
 *  * *8. Printing a text with double quotation in the middile using putchar()
 *  *
 */
int main(void)
{
	int i;
	char string[58]={"and that piece of art is useful\" - Dora Korpar, 2015-10-19"};

	for (i = 0; i < 58; i++)
	putchar(string[i]);
	putchar('\n');
	return (1);
}
