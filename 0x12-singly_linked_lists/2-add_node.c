#include "lists.h"

/**
  * _strlen - function that prints string length
  * @s: string
  * Return: return i
  */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * add_node - function that adds a new node at the beginning of a list_t list
  * @head: first node
  * @str: string
  * Return: address
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = _strlen(str);

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
