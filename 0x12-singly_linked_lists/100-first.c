#include <stdio.h>

void main_const(void) __attribute__((constructor));
/**
  * main_constructor - A constructor function that prints a message 
  * before main runs
  * Return: N/A
  */
void main_const(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
  
