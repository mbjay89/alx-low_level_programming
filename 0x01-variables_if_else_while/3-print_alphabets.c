#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *3. Alphabets small letters & Capital letters using putchar()
 *  *
 */
int main(void)
{
	char string;

	for (string = 'a'; string <= 'z'; string++)
	putchar(string);
	for (string = 'A'; string <= 'Z'; string++)
	putchar(string);
	putchar('\n');
	return (0);
}
