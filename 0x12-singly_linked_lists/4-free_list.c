#include "lists.h"

/**
  * free_list - function that free list
  * @head: the list
  */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
