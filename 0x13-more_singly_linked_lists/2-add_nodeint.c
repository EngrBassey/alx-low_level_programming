#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of a link list
  * @head: pointer to first node
  * @n: struct value
  * Return: return newNode
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNd;

	newNd = malloc(sizeof(listint_t));

	if (newNd == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newNd->n = n;
	newNd->next = *head;

	*head = newNd;

	return (newNd);
}
