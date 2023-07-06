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
	listint_t *newNode;

	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return (NULL);
		}
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

