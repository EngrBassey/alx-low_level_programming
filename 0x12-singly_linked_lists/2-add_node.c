#include "lists.h"

/**
  * add_node - function that creates newNode
  * @head: a pointer a node
  * @str: the node
  * Return: return newnode
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(str));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

/**
  * _strlen - funtion that gets length of a string
  * @s: the string
  * Return: return i
  */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
