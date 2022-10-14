#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *2. Alphabets using putchar()
 *  *
 */
int main(void)
{
	int i;
	char string[26] = {"abcdefghijklmnopqrstuvwxyz"};

	for (i = 0; i < 26; i++)
	putchar(string[i]);
	putchar('\n');
	return (0);
}
