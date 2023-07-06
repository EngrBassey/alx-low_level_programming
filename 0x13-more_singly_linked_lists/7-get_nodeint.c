#include "lists.h"

/**
  * get_nodeint_at_index - funtion that returns node index
  * @head: the node
  * @index: the iteration value
  * Return: return count
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}

	return (NULL);
}
