#include <stdio.h>
#include "main.h"

/**
  * _strlen - funtion that prints length of a string
  * @s: the string
  * Return: return i
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
  * is_palindrome - function that prints palindrome
  * @s: string
  * Return: retrun 1 or 0
  */

int is_palindrome(char *s)
{
	int lenght = _strlen(s);

	return (the_checker(s, 0, lenght - 1));
}

/**
  * the_checker - function that checks the palindrome
  * @s: strings
  * @start: the firs letter
  * @end: the last letter
  * Return: return checker
  */

int the_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (the_checker(s, start + 1, end - 1));
	}
}
