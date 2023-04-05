#include "lists.h"

/**
  * find_listint_loop - function that finds a loop
  * @head: first node
  * Return: return forward
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev, *forward;

	prev = forward = head;

	while (prev && forward && forward->next)
	{
		prev = prev->next;

		forward = forward->next->next;

		if (prev == forward)
		{
			prev = head;
			break;
		}
	}

	if (prev != NULL || forward != NULL || forward->next != NULL)
	{
		return (NULL);
	}

	while (prev != forward)
	{
		prev = prev->next;
		forward = forward->next;
	}

	return (forward);
}
