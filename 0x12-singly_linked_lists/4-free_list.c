#include "lists.h"

/**
  *free_list - a function that frees a list.
  * @head: input list to function.
  * Return: N/A
  */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

