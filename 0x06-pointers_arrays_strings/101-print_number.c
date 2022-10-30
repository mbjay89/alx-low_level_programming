int _putchar(char c);
void getint(int val);

#include "main.h"
/**
 **print_number - function that prints an integer.
 *only using _putchar
 *@n : input integer
 * Return: N/A
*/
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		 getint(n * -1);
	}
	else
		 getint(n);

}
/**
 * getint - A function to priting n
 * @val: an input unsigned integer
 * Return: N/A
 */
void getint(int val)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (val / i != 0)
		{
			_putchar((val / i) % 10 + '0');
		}
}
