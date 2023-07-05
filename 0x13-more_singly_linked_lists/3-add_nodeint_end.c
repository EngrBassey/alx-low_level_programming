#include "lists.h"

/**
  * add_nodeint_end - add node at the end of the lists
  * @head: poiner to the lists
  * @n: the elements
  * Return: return newnode
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(n));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	newNode->next = NULL;
	temp->next = newNode;

	return (newNode);
}
