#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node at a given pt n
  * @head: first node
  * @idx: index of the list where node should be added
  * @n: the value
  * Return: return newnode
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNd, *tmp;
	unsigned int i;

	newNd = malloc(sizeof(listint_t));

	if (newNd == NULL)
	{
		return (NULL);
	}

	newNd->n = n;

	if (idx == 0)
	{
		newNd->next = *head;
		*head = newNd;
		return (newNd);
	}

	tmp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;

		if (tmp == NULL)
		{
			return (NULL);
		}
	}

	newNd->next = tmp->next;
	tmp->next = newNd;

	return (newNd);
}
