#include "lists.h"

/**
  * add_node_end - function that creates node at the end
  * @head: the pointer to the first node
  * @str: the string
  * Return: return newNode
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(str));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = _strlen(str);

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

/**
  * _strlen - funtiorn that gets length of a string
  * @s: the stringn
  * Return: return
  */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
