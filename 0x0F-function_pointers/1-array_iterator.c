#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function that prints a name.
 *@array : pointer to array
 *@size : size of the array
 *@action: a pointer to the function needs to be used
 * Return: N/A
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
