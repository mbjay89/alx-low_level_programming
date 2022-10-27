#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a : input first integer
 *@n : input second integer
 * Return: N/A
*/
void reverse_array(int *a, int n)
{
	int i = 0, tmp;


	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
