#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that print the number of arguments passed into it.
 * @argc : number of arguments
 * @argv : argumnets values
 * Return : Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int x, y;
	
	if(argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
