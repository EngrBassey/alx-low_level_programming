#include "lists.h"

/**
 * _strlen - Length of string function
 * @str: string
 * Return: return i
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
  * add_node_end -  function that adds a new node at the end of a list_t list.
  * @head: node head
  * @str: string
  * Return: return
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp;
	
	if (str == null)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (new-> == NULL)
	{
		free(new);
		return (NULL);
	}
	newNode->len = _strlen(newNode->str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = newNode;
	return (newNode);
}

