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
	int i;
	char stringSmall[26] = {"abcdefghijklmnopqrstuvwxyz"};
	char stringCapital[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	for (i = 0; i < 26; i++)
	putchar(stringSmall[i]);
	for (i = 0; i < 26; i++)
	putchar(stringCapital[i]);
	putchar('\n');
	return (0);
}
