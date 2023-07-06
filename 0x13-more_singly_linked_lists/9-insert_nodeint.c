#include "lists.h"

/**
  * insert_nodeint_at_index - func that inserts a new node at a given position
  * @head: pointer to the lists
  * @idx: the desired index
  * @n: the value
  * Return: return
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			listint_t *newNode = malloc(sizeof(n));

			if (newNode == NULL)
			{
				return (NULL);
			}
			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;

			return (newNode);
		}

		count++;
		temp = temp->next;
	}

	return (NULL);

}

