#include "lists.h"

/**
  * sum_listint - function that returns the sum of all data(n)
  * @head: the lists node
  * Return: return sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0, n;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n = head->n;
		sum = sum + n;
		head = head->next;
	}
	return (sum);
}
