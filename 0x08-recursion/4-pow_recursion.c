#include "main.h"
/**
 **_pow_recursion - function returns the value of x raised to the power of y.
 *If y is lower than 0, the function should return -1
 *@x : input value to calculate the power for
 *@y : input power value
 * Return: value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));

}
