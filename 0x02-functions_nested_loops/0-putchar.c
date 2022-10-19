#include "main.h"
/**
 *  *main -Print _putchar
 *  *
 *  *Return: 0 (Success)
 *
 *  * *0. _putchar
 *  *
 */
int main(void)
{
	int i;
	char ch[8] = "_putchar";

	for (i = 0; i < 8; i++)
	_putchar(ch[i]);
	_putchar('\n');

	return (0);
}
