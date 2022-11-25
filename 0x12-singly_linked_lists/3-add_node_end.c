#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list
  * @head: head of linked list.
  * @str: string to store in the list.
  * Return: address of the head.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
