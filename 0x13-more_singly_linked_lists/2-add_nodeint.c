#include "lists.h"

/**
  * add_nodeint - function that adds node at the begining
  * @head: the head
  * @n: the element
  * Return: return new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{	listint_t *newNode;

	newNode = malloc(sizeof(n));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
