#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * struct list_s - singly linked list
  * @str: string - (malloc string)
  * @len: length of string
  * @next: pointer to next node
  *
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
