#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end of a list
  * @head: first node
  * @n: node values
  * Return: return newNd
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNd;

	listint_t *temp;

	newNd = malloc(sizeof(listint_t));

	if (newNd == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newNd->n = n;
	newNd->next = NULL;

	if (*head == NULL)
	{
		*head = newNd;
		return (newNd);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNd;

	return (newNd);

}
