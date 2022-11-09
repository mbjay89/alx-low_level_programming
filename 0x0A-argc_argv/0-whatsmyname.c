#include <stdio.h>
/*
 * main - where program starts
 *@argc : number of arguments
 *@argv : argumnets values
 *Return : 0
*/
int main(int argc, char **argv)
{
	int i;

	while (argc--)
	{
	printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}
